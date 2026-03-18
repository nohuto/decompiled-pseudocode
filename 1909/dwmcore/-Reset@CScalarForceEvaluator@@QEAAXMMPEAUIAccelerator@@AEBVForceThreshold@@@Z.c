/*
 * XREFs of ?Reset@CScalarForceEvaluator@@QEAAXMMPEAUIAccelerator@@AEBVForceThreshold@@@Z @ 0x18021FBC4
 * Callers:
 *     ?Initialize@CScalarForce@@QEAAXW4ThresholdKind@ForceThreshold@@MMM@Z @ 0x18021EDE8 (-Initialize@CScalarForce@@QEAAXW4ThresholdKind@ForceThreshold@@MMM@Z.c)
 *     ?Update@CExpressionForce@@UEAAMMPEAVCExpressionValueStack@@_K@Z @ 0x18021F080 (-Update@CExpressionForce@@UEAAMMPEAVCExpressionValueStack@@_K@Z.c)
 *     ?Reset@CVector3ForceEvaluator@@QEAAXUD2DVector3@@0PEAUIAccelerator@@11@Z @ 0x18021FFD8 (-Reset@CVector3ForceEvaluator@@QEAAXUD2DVector3@@0PEAUIAccelerator@@11@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?GetMinAcceleration@ForceThreshold@@QEBAMXZ @ 0x180220858 (-GetMinAcceleration@ForceThreshold@@QEBAMXZ.c)
 *     ?GetMinVelocity@ForceThreshold@@QEBAMXZ @ 0x1802208D4 (-GetMinVelocity@ForceThreshold@@QEBAMXZ.c)
 */

void __fastcall CScalarForceEvaluator::Reset(
        CScalarForceEvaluator *this,
        float a2,
        float a3,
        struct IAccelerator *a4,
        const struct ForceThreshold *a5)
{
  float v8; // xmm0_4
  float v9; // xmm0_4
  float v10; // xmm1_4
  float MinAcceleration; // xmm0_4
  int v12; // eax
  __int128 v13; // xmm0

  if ( (*(unsigned __int8 (__fastcall **)(struct IAccelerator *))(*(_QWORD *)a4 + 40LL))(a4) )
  {
    v8 = (*(float (__fastcall **)(struct IAccelerator *))(*(_QWORD *)a4 + 24LL))(a4);
    *((_BYTE *)this + 64) &= ~1u;
    v9 = (float)((float)(v8 - a2) > 0.0);
    *((float *)this + 13) = v9;
    v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v9) & _xmm);
    *((_BYTE *)this + 64) |= v10 >= 0.0000011920929;
  }
  *((float *)this + 15) = ForceThreshold::GetMinVelocity(a5);
  MinAcceleration = ForceThreshold::GetMinAcceleration(a5);
  *((_DWORD *)this + 6) = *((_DWORD *)this + 15);
  *((float *)this + 14) = MinAcceleration;
  *((float *)this + 4) = a2;
  *((float *)this + 5) = a3;
  *((float *)this + 7) = MinAcceleration;
  *((float *)this + 3) = (*(float (__fastcall **)(struct IAccelerator *, char *))(*(_QWORD *)a4 + 16LL))(
                           a4,
                           (char *)this + 12);
  v12 = *((_DWORD *)this + 7);
  v13 = *(_OWORD *)((char *)this + 12);
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_OWORD *)this + 2) = v13;
  *((_DWORD *)this + 12) = v12;
  *((_BYTE *)this + 64) = *((_BYTE *)this + 64) & 0xF9 | 2;
}
