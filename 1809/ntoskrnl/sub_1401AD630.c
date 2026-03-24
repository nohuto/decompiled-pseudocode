/*
 * XREFs of sub_1401AD630 @ 0x1401AD630
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630E0 (KxReleaseSpinLock.c)
 *     KeExitRetpoline @ 0x14013916C (KeExitRetpoline.c)
 *     _guard_check_icall @ 0x1401C5E80 (_guard_check_icall.c)
 *     memset @ 0x1401D1880 (memset.c)
 */

__int64 __fastcall sub_1401AD630(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v5; // rdi
  __int64 result; // rax

  KeExitRetpoline(a1, a2, a3, a4);
  KxAcquireSpinLock(&KiHardwareTriggerLock);
  KxReleaseSpinLock(&KiHardwareTriggerLock);
  v5 = *(unsigned int **)(a1 + 32);
  result = *v5;
  if ( (_DWORD)result )
  {
    result = (unsigned int)(result - 1);
    *v5 = result;
    if ( !(_DWORD)result )
    {
      memset(v5 + 2, 0, 0x40uLL);
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*((_QWORD *)v5 + 9) + 24LL))(
                 *((_QWORD *)v5 + 9),
                 *(_QWORD *)(*((_QWORD *)v5 + 9) + 32LL),
                 *(_QWORD *)(*((_QWORD *)v5 + 9) + 40LL),
                 *(_QWORD *)(*((_QWORD *)v5 + 9) + 48LL));
    }
  }
  if ( *((_QWORD *)v5 + 4) )
    return (*((__int64 (__fastcall **)(unsigned int *, _QWORD, _QWORD, _QWORD))v5 + 4))(
             v5 + 2,
             *((_QWORD *)v5 + 5),
             *((_QWORD *)v5 + 6),
             *((_QWORD *)v5 + 7));
  return result;
}
