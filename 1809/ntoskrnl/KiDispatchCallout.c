/*
 * XREFs of KiDispatchCallout @ 0x140142110
 * Callers:
 *     <none>
 * Callees:
 *     KeExitRetpoline @ 0x14013926C (KeExitRetpoline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KiDispatchCallout(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v6; // r10
  unsigned __int8 CurrentIrql; // di
  __int64 v8; // r8
  _BYTE *v9; // rdx
  __int64 v10; // r10
  unsigned __int64 v11; // r10
  _QWORD *v12; // r11
  char *v13; // rcx
  char v14; // al
  unsigned __int64 v15; // r14
  unsigned int v16; // ebx
  __int64 v17; // rsi
  char v18; // r8
  char v19; // cl
  __int64 v20; // rdx
  char v21; // cl
  __int64 v22; // r8
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD v25[4]; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 retaddr; // [rsp+58h] [rbp+18h] BYREF
  unsigned __int64 v27; // [rsp+60h] [rbp+20h]
  __int64 v28; // [rsp+60h] [rbp+20h]

  KeExitRetpoline();
  v6 = *a4;
  *(_QWORD *)(a1 + 72) = a1 ^ *a4 ^ retaddr;
  *(_QWORD *)(a1 + 56) = v6 ^ (unsigned __int64)&retaddr;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  retaddr = 0LL;
  v8 = 16LL;
  v9 = v25;
  v10 = *(_QWORD *)(v6 + 32) ^ *(_QWORD *)(v6 + 64);
  v25[0] = 51251211;
  v25[1] = 201785869;
  v11 = v10 | 0xFFFF800000000000uLL;
  v25[2] = 251986182;
  v25[3] = 150995978;
  v12 = (_QWORD *)v11;
  v27 = __ROR8__(v11, v11 & 0x3F);
  v13 = (char *)v25;
  do
  {
    v14 = *v13++;
    *v9++ = v14 ^ 0xB;
    --v8;
  }
  while ( v8 );
  v15 = v27;
  v16 = 0;
  v17 = 0LL;
  do
  {
    v18 = *v12 & 0x3F;
    v19 = ~(unsigned __int8)*v12 & 0x3F;
    *v12 = v17 + (KiWaitAlways ^ _byteswap_uint64(v15 ^ __ROL8__(KiWaitNever ^ *v12, KiWaitNever)));
    v20 = __ROR8__(v16 * (200 - v16), v19);
    v21 = v18;
    v22 = 16LL;
    v15 = v11 + __ROL8__(v20 ^ v15, v21);
    do
    {
      *v12 = __ROR8__(*((unsigned __int8 *)v25 + (*(_BYTE *)v12 & 0xF)) | *v12 & 0xFFFFFFFFFFFFFFF0uLL, 4);
      --v22;
    }
    while ( v22 );
    ++v12;
    ++v16;
    v17 += v11;
  }
  while ( v16 < 0x19 );
  v28 = *(_QWORD *)v11 ^ 0x85131481131482ELL;
  *(_DWORD *)v11 = -1390710795;
  *(_DWORD *)v11 ^= 0xBC2A27DB;
  ((void (__fastcall *)(unsigned __int64, __int64, _QWORD, _QWORD))v11)(v11, v28, 0LL, 0LL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
