/*
 * XREFs of ?Initialize@CConnection@DirectComposition@@AEAAJXZ @ 0x1C006D034
 * Callers:
 *     ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1C006CF40 (-OnSessionCreation@CConnection@DirectComposition@@SAJH@Z.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C0010990 (Win32AllocPoolNonPaged.c)
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     ?Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z @ 0x1C006D1A8 (-Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

__int64 __fastcall DirectComposition::CConnection::Initialize(DirectComposition::CConnection *this)
{
  DirectComposition::CConnection *v1; // r14
  struct _ERESOURCE *v2; // rax
  struct _ERESOURCE *v3; // rsi
  NTSTATUS SessionTokenManager; // ebx
  struct _ERESOURCE *v5; // rax
  struct _ERESOURCE *v6; // rdi
  struct _ERESOURCE *v7; // rax
  struct _ERESOURCE *v8; // rdi

  v1 = DirectComposition::CConnection::s_pSessionConnection;
  v2 = (struct _ERESOURCE *)Win32AllocPoolNonPaged(104LL, 0x73634344u);
  v3 = v2;
  if ( v2 )
    memset(v2, 0, sizeof(struct _ERESOURCE));
  else
    v3 = 0LL;
  if ( !v3 )
    return (unsigned int)-1073741801;
  SessionTokenManager = ExInitializeResourceLite(v3);
  if ( SessionTokenManager < 0 )
  {
LABEL_19:
    if ( !v3 )
      return (unsigned int)SessionTokenManager;
    Win32FreePool((__int64)v3);
    v6 = 0LL;
    goto LABEL_26;
  }
  *((_QWORD *)v1 + 1) = v3;
  v3 = 0LL;
  v5 = (struct _ERESOURCE *)Win32AllocPoolNonPaged(104LL, 0x73634344u);
  v6 = v5;
  if ( v5 )
    memset(v5, 0, sizeof(struct _ERESOURCE));
  else
    v6 = 0LL;
  if ( !v6 )
    SessionTokenManager = -1073741801;
  if ( SessionTokenManager < 0 || (SessionTokenManager = ExInitializeResourceLite(v6), SessionTokenManager < 0) )
  {
LABEL_26:
    if ( !v6 )
      return (unsigned int)SessionTokenManager;
    Win32FreePool((__int64)v6);
    v8 = 0LL;
    goto LABEL_28;
  }
  *((_QWORD *)v1 + 2) = v6;
  v7 = (struct _ERESOURCE *)Win32AllocPoolNonPaged(104LL, 0x73634344u);
  v8 = v7;
  if ( v7 )
    memset(v7, 0, sizeof(struct _ERESOURCE));
  else
    v8 = 0LL;
  if ( !v8 )
    SessionTokenManager = -1073741801;
  if ( SessionTokenManager >= 0 )
  {
    SessionTokenManager = ExInitializeResourceLite(v8);
    if ( SessionTokenManager >= 0 )
    {
      *((_QWORD *)v1 + 30) = v8;
      SessionTokenManager = DirectComposition::CSystemChannel::Create(
                              v1,
                              (struct DirectComposition::CSystemChannel **)v1 + 19);
      if ( SessionTokenManager < 0 )
        return (unsigned int)SessionTokenManager;
      SessionTokenManager = DxgkGetSessionTokenManager((char *)v1 + 248);
      goto LABEL_19;
    }
  }
LABEL_28:
  if ( v8 )
    Win32FreePool((__int64)v8);
  return (unsigned int)SessionTokenManager;
}
