/*
 * XREFs of ?SpatialInputController_Added_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKQEB_WGGG@Z @ 0x1800ABD3C
 * Callers:
 *     ?FinalizeInitialization@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800AF90C (-FinalizeInitialization@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wi.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A2798 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::SpatialInputController_Added_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        int a2,
        const WCHAR *a3,
        __int16 a4,
        char a5,
        char a6)
{
  const struct _TlgProvider_t *v7; // rcx
  __int64 v8; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-39h] BYREF
  int *v10; // [rsp+58h] [rbp-19h]
  __int64 v11; // [rsp+60h] [rbp-11h]
  const WCHAR *v12; // [rsp+68h] [rbp-9h]
  int v13; // [rsp+70h] [rbp-1h]
  int v14; // [rsp+74h] [rbp+3h]
  __int16 *v15; // [rsp+78h] [rbp+7h]
  __int64 v16; // [rsp+80h] [rbp+Fh]
  char *v17; // [rsp+88h] [rbp+17h]
  __int64 v18; // [rsp+90h] [rbp+1Fh]
  char *v19; // [rsp+98h] [rbp+27h]
  __int64 v20; // [rsp+A0h] [rbp+2Fh]
  int v21; // [rsp+D0h] [rbp+5Fh] BYREF
  __int16 v22; // [rsp+E0h] [rbp+6Fh] BYREF

  v22 = a4;
  v21 = a2;
  v7 = (const struct _TlgProvider_t *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( *(_DWORD *)v7 > 4u
    && (*((_QWORD *)v7 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v7 + 3) & 0x400000000000LL) == *((_QWORD *)v7 + 3) )
  {
    v11 = 4LL;
    v10 = &v21;
    LODWORD(v8) = 0;
    if ( a3 )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( a3[v8] );
    }
    v14 = 0;
    v13 = 2 * v8 + 2;
    v16 = 2LL;
    v15 = &v22;
    v18 = 2LL;
    v17 = &a5;
    if ( !a3 )
      a3 = &sourceString;
    v12 = a3;
    v19 = &a6;
    v20 = 2LL;
    TlgWrite(v7, &unk_180168F91, 0LL, 0LL, 7u, &pData);
  }
}
