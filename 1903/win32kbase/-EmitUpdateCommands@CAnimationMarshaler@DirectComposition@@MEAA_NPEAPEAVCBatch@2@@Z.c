/*
 * XREFs of ?EmitUpdateCommands@CAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C008CE30
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000CBD4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitAddTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C008CF1C (-EmitAddTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitClearTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C008CF70 (-EmitClearTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetInstance@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C008CF98 (-EmitSetInstance@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetSeek@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C008D004 (-EmitSetSeek@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetPaused@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C008D084 (-EmitSetPaused@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetPrimitives@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C008D0F4 (-EmitSetPrimitives@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitBeginTime@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C008D18C (-EmitBeginTime@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

char __fastcall DirectComposition::CAnimationMarshaler::EmitUpdateCommands(
        DirectComposition::CAnimationMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  DirectComposition::CAnimationMarshaler *v2; // rsi
  char v5; // bp
  char *v7; // rcx
  char *v8; // rcx
  char *v9; // rdx
  char *v10; // rax
  char *v11; // r14
  __int64 v12; // rax
  void *v13; // [rsp+40h] [rbp+8h] BYREF

  v2 = (DirectComposition::CAnimationMarshaler *)((char *)this - 16);
  if ( (*((_DWORD *)this + 4) & 0x20000) != 0 )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v13) )
      return 0;
    v7 = (char *)v13;
    *(_DWORD *)v13 = 16;
    *(_QWORD *)(v7 + 4) = 0LL;
    *((_DWORD *)v7 + 3) = 0;
    *((_DWORD *)v7 + 1) = 4;
    *((_DWORD *)v7 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v7 + 3) = *((_DWORD *)this + 52);
    *((_DWORD *)this + 4) &= ~0x20000u;
  }
  if ( !DirectComposition::CAnimationMarshaler::EmitBeginTime(v2, a2) )
    return 0;
  if ( *((_QWORD *)this + 16) )
  {
    if ( (*((_DWORD *)this + 4) & 0x200) == 0 && DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v13) )
    {
      v8 = (char *)v13;
      *(_DWORD *)v13 = 28;
      *(_QWORD *)(v8 + 4) = 0LL;
      *(_QWORD *)(v8 + 12) = 0LL;
      *(_QWORD *)(v8 + 20) = 0LL;
      *((_DWORD *)v8 + 1) = 11;
      *((_DWORD *)v8 + 2) = *((_DWORD *)this + 6);
      *(_OWORD *)(v8 + 12) = *(_OWORD *)*((_QWORD *)this + 16);
      *((_DWORD *)this + 4) |= 0x200u;
    }
    if ( *((_QWORD *)this + 16) && (*((_DWORD *)this + 4) & 0x200) == 0 )
      return 0;
  }
  if ( *((_QWORD *)this + 15) && (*((_DWORD *)this + 4) & 0x400) == 0 )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v13) )
      return 0;
    v9 = (char *)v13;
    *(_DWORD *)v13 = 16;
    *(_QWORD *)(v9 + 4) = 0LL;
    *((_DWORD *)v9 + 3) = 0;
    *((_DWORD *)v9 + 1) = 10;
    *((_DWORD *)v9 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v9 + 3) = *(_DWORD *)(*((_QWORD *)this + 15) + 24LL);
    *((_DWORD *)this + 4) |= 0x400u;
  }
  if ( !DirectComposition::CAnimationMarshaler::EmitSetPrimitives(v2, a2) )
    return 0;
  v5 = 1;
  if ( !*((_DWORD *)this + 35) || (*((_DWORD *)this + 4) & 0x800) != 0 )
    goto LABEL_7;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x3CuLL, &v13) )
    return 0;
  v10 = (char *)v13;
  *(_DWORD *)v13 = 60;
  v11 = v10 + 4;
  memset(v10 + 4, 0, 0x38uLL);
  *(_DWORD *)v11 = 5;
  *((_DWORD *)v11 + 1) = *((_DWORD *)this + 6);
  *((_DWORD *)v11 + 2) = *((_DWORD *)this + 35);
  *((_QWORD *)v11 + 2) = *((_QWORD *)this + 18);
  v12 = *((_QWORD *)this + 19);
  if ( v12 )
    LODWORD(v12) = *(_DWORD *)(v12 + 40);
  *((_DWORD *)v11 + 6) = v12;
  *((_DWORD *)v11 + 7) = *((_DWORD *)this + 40);
  v11[32] = *((_BYTE *)this + 184) & 1;
  *((_QWORD *)v11 + 5) = *((_QWORD *)this + 21);
  *((_QWORD *)v11 + 6) = *((_QWORD *)this + 22);
  *((_DWORD *)this + 4) |= 0x800u;
LABEL_7:
  if ( !DirectComposition::CAnimationMarshaler::EmitSetPaused(v2, a2)
    || !DirectComposition::CAnimationMarshaler::EmitSetSeek(v2, a2)
    || !DirectComposition::CAnimationMarshaler::EmitSetInstance(v2, a2)
    || !DirectComposition::CAnimationMarshaler::EmitClearTimeEvents(v2, a2)
    || !DirectComposition::CAnimationMarshaler::EmitAddTimeEvents(v2, a2) )
  {
    return 0;
  }
  return v5;
}
