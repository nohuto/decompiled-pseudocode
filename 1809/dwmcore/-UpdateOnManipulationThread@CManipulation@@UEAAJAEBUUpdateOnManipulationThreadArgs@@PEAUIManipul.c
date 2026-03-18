/*
 * XREFs of ?UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@PEAUIManipulationTelemetryData@@@Z @ 0x1801A67E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     _anonymous_namespace_::StoreIfChanged_float_ @ 0x1801A53D0 (_anonymous_namespace_--StoreIfChanged_float_.c)
 *     _anonymous_namespace_::StoreIfChanged_D2DVector3_ @ 0x1801A53EC (_anonymous_namespace_--StoreIfChanged_D2DVector3_.c)
 *     ?_ResetManipulationThreadDataIfNecessary@CManipulation@@AEAAXW4InteractionState@@@Z @ 0x1801A6E1C (-_ResetManipulationThreadDataIfNecessary@CManipulation@@AEAAXW4InteractionState@@@Z.c)
 *     ?_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z @ 0x1801A6E8C (-_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z.c)
 *     ?_UpdateCaptureState@CManipulation@@AEAAX_N@Z @ 0x1801A74A4 (-_UpdateCaptureState@CManipulation@@AEAAX_N@Z.c)
 */

__int64 __fastcall CManipulation::UpdateOnManipulationThread(
        CManipulation *this,
        const struct UpdateOnManipulationThreadArgs *a2,
        struct IManipulationTelemetryData *a3)
{
  CManipulation *v4; // r12
  unsigned int v6; // ebp
  char v7; // si
  __int64 v8; // rcx
  char v9; // r10
  __int64 v10; // r11
  float *v11; // r15
  __int64 v12; // rcx
  float *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // r11
  char v16; // si
  __int64 v17; // r11
  char v18; // si
  __int64 v19; // r11
  char v20; // si
  __int64 v21; // r11
  char v22; // si
  char v23; // si
  unsigned __int8 v24; // r10
  __int64 v25; // r11
  int v26; // eax
  __int64 v27; // rcx

  v4 = (CManipulation *)((char *)this - 64);
  v6 = 0;
  CManipulation::_UpdateCaptureState((CManipulation *)((char *)this - 64), (*((_BYTE *)a2 + 16) & 4) != 0);
  v7 = 0;
  CManipulation::_ResetManipulationThreadDataIfNecessary(v8, *(unsigned int *)a2);
  v11 = (float *)((char *)a2 + 32);
  v12 = *((_QWORD *)a2 + 4) - 0x3F8000003F800000LL;
  if ( *((_QWORD *)a2 + 4) == 0x3F8000003F800000LL )
    v12 = *((unsigned int *)a2 + 10) - 1065353216LL;
  if ( v12 )
  {
    v7 = v9;
    *(float *)(v10 + 32) = *(float *)(v10 + 32) * *v11;
    *(float *)(v10 + 36) = *((float *)a2 + 9) * *(float *)(v10 + 36);
    *(float *)(v10 + 40) = *((float *)a2 + 10) * *(float *)(v10 + 40);
  }
  v13 = (float *)((char *)a2 + 20);
  v14 = *(_QWORD *)((char *)a2 + 20);
  if ( !v14 )
    v14 = *((unsigned int *)a2 + 7);
  if ( v14 )
  {
    v7 = v9;
    *(float *)(v10 + 8) = *(float *)(v10 + 8) + *v13;
    *(float *)(v10 + 12) = *((float *)a2 + 6) + *(float *)(v10 + 12);
    *(float *)(v10 + 16) = *((float *)a2 + 7) + *(float *)(v10 + 16);
  }
  *(_QWORD *)(v10 + 44) = *(_QWORD *)v11;
  *(_DWORD *)(v10 + 52) = *((_DWORD *)a2 + 10);
  *(_QWORD *)(v10 + 20) = *(_QWORD *)v13;
  *(_DWORD *)(v10 + 28) = *((_DWORD *)a2 + 7);
  v16 = anonymous_namespace_::StoreIfChanged_D2DVector3_((__int64)a2 + 48, v10 + 136) | v7;
  v18 = anonymous_namespace_::StoreIfChanged_D2DVector3_((__int64)a2 + 60, v15 + 148) | v16;
  v20 = anonymous_namespace_::StoreIfChanged_D2DVector3_((__int64)a2 + 76, v17 + 60) | v18;
  v22 = anonymous_namespace_::StoreIfChanged_float_((float *)a2 + 11, (float *)(v19 + 56)) | v20;
  v23 = anonymous_namespace_::StoreIfChanged_float_((float *)a2 + 18, (float *)(v21 + 160)) | v22;
  if ( *(_DWORD *)a2 != *(_DWORD *)(v25 + 164)
    || v23
    || *(_DWORD *)(v25 + 168) != *((_DWORD *)a2 + 22)
    || *(_DWORD *)(v25 + 176) != *((_DWORD *)a2 + 1)
    || *(_DWORD *)(v25 + 180) != *((_DWORD *)a2 + 2)
    || *(_DWORD *)(v25 + 184) != *((_DWORD *)a2 + 3)
    || ((unsigned __int8)(*((_BYTE *)a2 + 16) ^ *(_BYTE *)(v25 + 188)) & v24) != 0
    || ((*((_BYTE *)a2 + 16) ^ *(_BYTE *)(v25 + 188)) & 2) != 0 )
  {
    *(_DWORD *)(v25 + 164) = *(_DWORD *)a2;
    *(_DWORD *)(v25 + 176) = *((_DWORD *)a2 + 1);
    *(_DWORD *)(v25 + 180) = *((_DWORD *)a2 + 2);
    *(_DWORD *)(v25 + 184) = *((_DWORD *)a2 + 3);
    *(_DWORD *)(v25 + 168) = *((_DWORD *)a2 + 22);
    *(_BYTE *)(v25 + 188) ^= v24 & (*((_BYTE *)a2 + 16) ^ *(_BYTE *)(v25 + 188));
    *(_BYTE *)(v25 + 188) ^= (*((_BYTE *)a2 + 16) ^ *(_BYTE *)(v25 + 188)) & 2;
    *(_DWORD *)(v25 + 172) = *((_DWORD *)a2 + 23);
    v26 = CManipulation::_SendUpdateToRenderThread(
            v4,
            v23,
            (const struct UpdateOnManipulationThreadArgs *)((char *)a2 + 20),
            (const struct UpdateOnManipulationThreadArgs *)((char *)a2 + 32));
    v6 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x7Au);
    }
    else if ( a3 )
    {
      (*(void (__fastcall **)(struct IManipulationTelemetryData *))(*(_QWORD *)a3 + 56LL))(a3);
    }
  }
  return v6;
}
