/*
 * XREFs of ?GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z @ 0x180427824
 * Callers:
 *     ?GetPackageSidFromProcess@CallerIdentity@@YAJKPEAPEAX@Z @ 0x1804277B4 (-GetPackageSidFromProcess@CallerIdentity@@YAJKPEAPEAX@Z.c)
 * Callees:
 *     ??0WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18003B250 (--0WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$CAutoHandle@PEAX@@QEAA@XZ @ 0x1800548AC (--1-$CAutoHandle@PEAX@@QEAA@XZ.c)
 *     ?OpenTokenForProcess@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAX@Z @ 0x18042695C (-OpenTokenForProcess@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAX@Z.c)
 *     ?GetPackageSidFromProcessToken@CallerIdentity@@YAJPEAXPEAPEAX@Z @ 0x180427890 (-GetPackageSidFromProcessToken@CallerIdentity@@YAJPEAXPEAPEAX@Z.c)
 */

__int64 __fastcall CallerIdentity::GetPackageSidFromProcessHandle(CallerIdentity *this, _QWORD *a2, void **a3)
{
  HANDLE v4; // r8
  signed int v5; // eax
  void **v6; // r8
  signed int PackageSidFromProcessToken; // ebx
  void *TokenHandle; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)&TokenHandle);
  v5 = ARI::ProcessToken::SysAppId::OpenTokenForProcess(v4, &TokenHandle, (void **)v4);
  PackageSidFromProcessToken = v5;
  if ( v5 > 0 )
    PackageSidFromProcessToken = (unsigned __int16)v5 | 0x80070000;
  if ( PackageSidFromProcessToken >= 0 )
    PackageSidFromProcessToken = CallerIdentity::GetPackageSidFromProcessToken(TokenHandle, a2, v6);
  CAutoHandle<void *>::~CAutoHandle<void *>(&TokenHandle);
  return (unsigned int)PackageSidFromProcessToken;
}
