/*
 * XREFs of ?IsProcessAppContainer@CallerIdentity@@YAJPEAXPEA_N@Z @ 0x180407160
 * Callers:
 *     ?RuntimeClassInitialize@PenWorkspaceScreenCaptureBroker@@QEAAJXZ @ 0x1801DDD44 (-RuntimeClassInitialize@PenWorkspaceScreenCaptureBroker@@QEAAJXZ.c)
 * Callees:
 *     ??1?$CAutoHandle@PEAX@@QEAA@XZ @ 0x18000F83C (--1-$CAutoHandle@PEAX@@QEAA@XZ.c)
 *     ??0WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180018340 (--0WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180116D70 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?OpenTokenForProcess@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAX@Z @ 0x18040732C (-OpenTokenForProcess@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAX@Z.c)
 */

__int64 __fastcall CallerIdentity::IsProcessAppContainer(CallerIdentity *this, bool *a2, bool *a3)
{
  HANDLE v4; // r8
  int v5; // eax
  int Error; // ebx
  int TokenInformation; // [rsp+48h] [rbp+10h] BYREF
  DWORD ReturnLength; // [rsp+50h] [rbp+18h] BYREF
  HANDLE TokenHandle; // [rsp+58h] [rbp+20h] BYREF

  *a2 = 0;
  Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)&TokenHandle);
  v5 = ARI::ProcessToken::SysAppId::OpenTokenForProcess(v4, &TokenHandle, (void **)v4);
  Error = v5;
  if ( v5 > 0 )
    Error = (unsigned __int16)v5 | 0x80070000;
  if ( Error >= 0 )
  {
    TokenInformation = 0;
    if ( GetTokenInformation(TokenHandle, TokenIsAppContainer, &TokenInformation, 4u, &ReturnLength) )
    {
      Error = 0;
LABEL_7:
      *a2 = TokenInformation != 0;
      goto LABEL_8;
    }
    Error = ResultFromKnownLastError();
    if ( Error >= 0 )
      goto LABEL_7;
  }
LABEL_8:
  CAutoHandle<void *>::~CAutoHandle<void *>(&TokenHandle);
  return (unsigned int)Error;
}
