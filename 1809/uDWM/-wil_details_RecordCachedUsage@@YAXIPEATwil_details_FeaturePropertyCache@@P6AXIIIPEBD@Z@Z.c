/*
 * XREFs of ?wil_details_RecordCachedUsage@@YAXIPEATwil_details_FeaturePropertyCache@@P6AXIIIPEBD@Z@Z @ 0x18004D454
 * Callers:
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x180034110 (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 * Callees:
 *     ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x180033E30 (-wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil_details_RecordCachedUsage(
        unsigned int a1,
        union wil_details_FeaturePropertyCache *a2,
        void (*a3)(unsigned int, unsigned int, unsigned int, const char *))
{
  unsigned int v4; // ebx
  int *v5; // rdi
  void (*v6)(unsigned int, unsigned int, unsigned int, const char *); // rax
  unsigned __int64 v7; // r8
  unsigned int v8; // [rsp+30h] [rbp-19h] BYREF
  unsigned __int64 v9; // [rsp+38h] [rbp-11h]
  int v10; // [rsp+40h] [rbp-9h] BYREF
  BOOL v11; // [rsp+44h] [rbp-5h]
  int v12; // [rsp+48h] [rbp-1h]
  BOOL v13; // [rsp+4Ch] [rbp+3h]
  int v14; // [rsp+50h] [rbp+7h]
  BOOL v15; // [rsp+54h] [rbp+Bh]
  int v16; // [rsp+58h] [rbp+Fh]
  BOOL v17; // [rsp+5Ch] [rbp+13h]
  int v18; // [rsp+60h] [rbp+17h]
  int v19; // [rsp+64h] [rbp+1Bh]
  int v20; // [rsp+68h] [rbp+1Fh]
  int v21; // [rsp+6Ch] [rbp+23h]
  int v22; // [rsp+70h] [rbp+27h]
  int v23; // [rsp+74h] [rbp+2Bh]
  int v24; // [rsp+78h] [rbp+2Fh]
  int v25; // [rsp+7Ch] [rbp+33h]

  wil_details_ModifyFeatureData(
    a2,
    (__int64 (__fastcall *)(signed __int32 *, void *))wil_details_CaptureReportedUsageCallback,
    &v8);
  v10 = 2;
  v11 = (v8 & 0x100000) == 0 && (v8 & 0x10000) != 0;
  v12 = 6;
  v13 = (v8 & 0x200000) == 0 && (v8 & 0x20000) != 0;
  v14 = 3;
  v15 = (v8 & 0x400000) == 0 && (v8 & 0x40000) != 0;
  v16 = 7;
  v17 = (v8 & 0x800000) == 0 && (v8 & 0x80000) != 0;
  v18 = 0;
  if ( ((v8 >> 15) & 1) != 0 )
    v19 = 0;
  else
    v19 = (v8 >> 6) & 0x1FF;
  v20 = 4;
  if ( ((v8 >> 15) & 1) != 0 )
    v21 = (v8 >> 6) & 0x1FF;
  else
    v21 = 0;
  v22 = 1;
  if ( (v8 & 0x80000000) == 0 )
    v23 = HIBYTE(v8) & 0x7F;
  else
    v23 = 0;
  v24 = 5;
  if ( (v8 & 0x80000000) == 0 )
    v25 = 0;
  else
    v25 = HIBYTE(v8) & 0x7F;
  v4 = 0;
  v5 = &v10;
  do
  {
    v9 = *(_QWORD *)v5;
    if ( !HIDWORD(v9) )
      goto LABEL_36;
    v6 = g_wil_details_internalRecordFeatureUsage;
    if ( g_wil_details_internalRecordFeatureUsage )
    {
      v7 = HIDWORD(v9);
    }
    else
    {
      v6 = g_wil_details_apiRecordFeatureUsage;
      if ( !g_wil_details_apiRecordFeatureUsage )
        goto LABEL_36;
      v7 = HIDWORD(v9);
    }
    ((void (__fastcall *)(_QWORD, _QWORD, unsigned __int64, _QWORD))v6)(a1, (unsigned int)v9, v7, 0LL);
LABEL_36:
    ++v4;
    v5 += 2;
  }
  while ( v4 < 8 );
}
