/*
 * XREFs of ?Initialize@CConnection@DirectComposition@@AEAAJXZ @ 0x1C005CE24
 * Callers:
 *     ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1C005CFC0 (-OnSessionCreation@CConnection@DirectComposition@@SAJH@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C002BFC0 (Win32AllocPoolNonPaged.c)
 *     ?Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z @ 0x1C005CD8C (-Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

__int64 __fastcall DirectComposition::CConnection::Initialize(DirectComposition::CConnection *this)
{
  DirectComposition::CConnection *v1; // r14
  struct _ERESOURCE *v2; // rbp
  struct _ERESOURCE *v3; // rdi
  struct _ERESOURCE *v4; // rax
  struct _ERESOURCE *v5; // rsi
  NTSTATUS SessionTokenManager; // ebx
  struct _ERESOURCE *v7; // rax
  struct _ERESOURCE *v8; // rax

  v1 = DirectComposition::CConnection::s_pSessionConnection;
  v2 = 0LL;
  v3 = 0LL;
  v4 = (struct _ERESOURCE *)Win32AllocPoolNonPaged(104LL, 0x73634344u);
  v5 = v4;
  if ( v4 )
    memset(v4, 0, sizeof(struct _ERESOURCE));
  else
    v5 = 0LL;
  SessionTokenManager = v5 == 0LL ? 0xC0000017 : 0;
  if ( v5 )
  {
    SessionTokenManager = ExInitializeResourceLite(v5);
    if ( SessionTokenManager < 0 )
      goto LABEL_21;
    *((_QWORD *)v1 + 1) = v5;
    v5 = 0LL;
  }
  if ( SessionTokenManager >= 0 )
  {
    v7 = (struct _ERESOURCE *)Win32AllocPoolNonPaged(104LL, 0x73634344u);
    v2 = v7;
    if ( v7 )
      memset(v7, 0, sizeof(struct _ERESOURCE));
    else
      v2 = 0LL;
    if ( !v2 )
      SessionTokenManager = -1073741801;
    if ( SessionTokenManager >= 0 )
    {
      SessionTokenManager = ExInitializeResourceLite(v2);
      if ( SessionTokenManager >= 0 )
      {
        *((_QWORD *)v1 + 2) = v2;
        v2 = 0LL;
        v8 = (struct _ERESOURCE *)Win32AllocPoolNonPaged(104LL, 0x73634344u);
        v3 = v8;
        if ( v8 )
          memset(v8, 0, sizeof(struct _ERESOURCE));
        else
          v3 = 0LL;
        if ( !v3 )
          SessionTokenManager = -1073741801;
        if ( SessionTokenManager >= 0 )
        {
          SessionTokenManager = ExInitializeResourceLite(v3);
          if ( SessionTokenManager >= 0 )
          {
            *((_QWORD *)v1 + 30) = v3;
            v3 = 0LL;
            SessionTokenManager = DirectComposition::CSystemChannel::Create(
                                    v1,
                                    (struct DirectComposition::CSystemChannel **)v1 + 19);
            if ( SessionTokenManager >= 0 )
              SessionTokenManager = DxgkGetSessionTokenManager((char *)v1 + 248);
          }
        }
      }
    }
  }
LABEL_21:
  if ( v5 )
    Win32FreePool((__int64)v5);
  if ( v2 )
    Win32FreePool((__int64)v2);
  if ( v3 )
    Win32FreePool((__int64)v3);
  return (unsigned int)SessionTokenManager;
}
