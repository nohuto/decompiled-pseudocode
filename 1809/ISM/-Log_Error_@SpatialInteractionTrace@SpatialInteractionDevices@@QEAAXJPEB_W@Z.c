/*
 * XREFs of ?Log_Error_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJPEB_W@Z @ 0x1800BCAE0
 * Callers:
 *     ?ReadInitializationTimeProperties@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@MEAAJXZ @ 0x1800BDA20 (-ReadInitializationTimeProperties@SpatialInteractionSourceHand@SpatialInteractions@Internal@Wind.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A2798 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::Log_Error_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        int a2,
        const wchar_t *a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  int *v7; // [rsp+50h] [rbp-38h]
  __int64 v8; // [rsp+58h] [rbp-30h]
  const wchar_t *v9; // [rsp+60h] [rbp-28h]
  int v10; // [rsp+68h] [rbp-20h]
  int v11; // [rsp+6Ch] [rbp-1Ch]
  int v12; // [rsp+98h] [rbp+10h] BYREF

  v12 = a2;
  v4 = *((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( *(_DWORD *)v4 > 2u && (*(_BYTE *)(v4 + 16) & 2) != 0 && (*(_QWORD *)(v4 + 24) & 2LL) == *(_QWORD *)(v4 + 24) )
  {
    v7 = &v12;
    v8 = 4LL;
    LODWORD(v5) = 0;
    if ( a3 )
    {
      v5 = -1LL;
      do
        ++v5;
      while ( a3[v5] );
    }
    v11 = 0;
    if ( !a3 )
      a3 = &sourceString;
    v9 = a3;
    v10 = 2 * v5 + 2;
    TlgWrite((TraceLoggingHProvider)v4, &unk_18016A98D, 0LL, 0LL, 4u, &pData);
  }
}
