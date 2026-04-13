/*
 * XREFs of ?TaskbarOutOfSpaceForPin_@TaskbarContentDeliveryPinningTelemetry@@QEAAXPEBG@Z @ 0x18000B3F4
 * Callers:
 *     _lambda_67d3978e1092d2b882811411f68ad6cb_::operator() @ 0x18000B7EC (_lambda_67d3978e1092d2b882811411f68ad6cb_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x180001200 (_TlgWrite.c)
 *     ?Provider@TaskbarLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18000B1F0 (-Provider@TaskbarLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 */

void __fastcall TaskbarContentDeliveryPinningTelemetry::TaskbarOutOfSpaceForPin_(
        TaskbarContentDeliveryPinningTelemetry *this,
        const unsigned __int16 *a2)
{
  const struct _TlgProvider_t *v3; // r10
  __int64 v4; // rax
  __int64 v5; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  const unsigned __int16 *v7; // [rsp+60h] [rbp-38h]
  int v8; // [rsp+68h] [rbp-30h]
  int v9; // [rsp+6Ch] [rbp-2Ch]
  __int64 *v10; // [rsp+70h] [rbp-28h]
  __int64 v11; // [rsp+78h] [rbp-20h]

  v3 = TaskbarLogging::Provider();
  if ( *(_DWORD *)v3 > 5u
    && (*((_QWORD *)v3 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v3 + 3) & 0x400000000000LL) == *((_QWORD *)v3 + 3) )
  {
    LODWORD(v4) = 0;
    if ( a2 )
    {
      v4 = -1LL;
      do
        ++v4;
      while ( a2[v4] );
    }
    v9 = 0;
    v8 = 2 * v4 + 2;
    v5 = 0x1000000LL;
    if ( !a2 )
      a2 = &Src;
    v11 = 8LL;
    v7 = a2;
    v10 = &v5;
    TlgWrite(v3, &unk_18016ACDD, 0LL, 0LL, 4u, &pData);
  }
}
