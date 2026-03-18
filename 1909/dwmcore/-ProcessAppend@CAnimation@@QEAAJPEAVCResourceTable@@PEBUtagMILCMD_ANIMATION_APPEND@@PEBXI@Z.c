/*
 * XREFs of ?ProcessAppend@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_APPEND@@PEBXI@Z @ 0x180015BA0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?Create@CPayloadedAnimationPrimitiveBuffer@@SAJPEAPEAV1@@Z @ 0x180015C98 (-Create@CPayloadedAnimationPrimitiveBuffer@@SAJPEAPEAV1@@Z.c)
 *     ?RegisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x18003375C (-RegisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 *     ??$ReleaseInterface@VCAnimationPrimitiveBuffer@@@@YAXAEAPEAVCAnimationPrimitiveBuffer@@@Z @ 0x180033894 (--$ReleaseInterface@VCAnimationPrimitiveBuffer@@@@YAXAEAPEAVCAnimationPrimitiveBuffer@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimation::ProcessAppend(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATION_APPEND *a3,
        const void *a4,
        unsigned int a5)
{
  unsigned int v5; // r10d
  CAnimation *v8; // rdi
  unsigned int v9; // ebx
  struct CPayloadedAnimationPrimitiveBuffer *v10; // rcx
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rcx
  int v15; // r9d
  unsigned int v16; // [rsp+20h] [rbp-18h]
  struct CPayloadedAnimationPrimitiveBuffer *v17; // [rsp+48h] [rbp+10h] BYREF

  v17 = a2;
  v5 = *((_DWORD *)a3 + 2);
  v8 = this;
  if ( !is_mul_ok(v5, 0x20uLL) )
  {
    v9 = -2147024362;
    v16 = 289;
    goto LABEL_22;
  }
  LODWORD(this) = a5;
  v9 = 0;
  if ( 32LL * *((unsigned int *)a3 + 2) != a5 )
  {
    v9 = -2003303421;
    v16 = 293;
LABEL_22:
    v15 = v9;
    goto LABEL_23;
  }
  if ( a4 && v5 )
  {
    v10 = (struct CPayloadedAnimationPrimitiveBuffer *)*((_QWORD *)v8 + 15);
    if ( !v10 )
    {
      v11 = CPayloadedAnimationPrimitiveBuffer::Create(&v17);
      v9 = v11;
      if ( v11 < 0 )
      {
        v16 = 302;
LABEL_19:
        v15 = v11;
LABEL_23:
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v15, v16, 0LL);
        goto LABEL_12;
      }
      v10 = v17;
      *((_QWORD *)v8 + 15) = v17;
      v5 = *((_DWORD *)a3 + 2);
    }
    v11 = (*(__int64 (__fastcall **)(struct CPayloadedAnimationPrimitiveBuffer *, _QWORD, const void *))(*(_QWORD *)v10 + 40LL))(
            v10,
            v5,
            a4);
    v9 = v11;
    if ( v11 < 0 )
    {
      v16 = 306;
    }
    else
    {
      v12 = *((_QWORD *)v8 + 18);
      if ( v12 && !*(_QWORD *)(v12 + 88) )
        goto LABEL_12;
      v11 = CBaseAnimation::RegisterAnimateResource(v8);
      v9 = v11;
      if ( v11 >= 0 )
        goto LABEL_12;
      v16 = 312;
    }
    goto LABEL_19;
  }
LABEL_12:
  v13 = *((_QWORD *)v8 + 15);
  if ( v13 && !(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 32LL))(v13) )
    ReleaseInterface<CAnimationPrimitiveBuffer>((char *)v8 + 120);
  return v9;
}
