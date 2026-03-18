/*
 * XREFs of MmAllocatePoolMemory @ 0x14002270C
 * Callers:
 *     RtlpHpEnvAllocVA @ 0x140022550 (RtlpHpEnvAllocVA.c)
 * Callees:
 *     MiCommitPoolMemory @ 0x140022A30 (MiCommitPoolMemory.c)
 *     MiObtainSystemVa @ 0x1400AAF7C (MiObtainSystemVa.c)
 *     MiObtainDynamicVa @ 0x1400AAFA4 (MiObtainDynamicVa.c)
 *     MmFreePoolMemory @ 0x14010E4BC (MmFreePoolMemory.c)
 *     MiObtainSessionVa @ 0x140138958 (MiObtainSessionVa.c)
 */

__int64 __fastcall MmAllocatePoolMemory(__int64 *a1, unsigned __int64 *a2, int a3, int a4, int a5)
{
  unsigned int v8; // ebx
  unsigned int v9; // esi
  int v10; // ebp
  int v11; // edi
  unsigned __int64 v13; // rdi
  __int64 v14; // rax

  v8 = a3 & 0x7F;
  if ( (a3 & 0x7F) == 0 || v8 > (unsigned __int16)KeNumberNodes )
    return 3221225713LL;
  v9 = a3 & 0xFFFFFF80;
  v10 = a3 & 0x2000;
  if ( (a3 & 0x2000) != 0 )
  {
    *a1 = 0LL;
    v13 = *a2 >> 21;
    if ( v13 < 0x100000000LL )
    {
      if ( (a5 & 1) != 0 )
      {
        if ( (a5 & 0x20) != 0 )
        {
          v14 = MiObtainSessionVa((unsigned int)v13);
          if ( !v14 )
            return 3221225495LL;
          _InterlockedExchangeAdd(
            (volatile signed __int32 *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1] + 1148),
            v13);
        }
        else
        {
          v14 = MiObtainSystemVa((unsigned int)v13, 6LL);
        }
      }
      else
      {
        v14 = MiObtainDynamicVa(&qword_140465A58[11 * v8 - 7], (unsigned int)v13, 5LL);
      }
      if ( v14 )
      {
        *a1 = v14;
        goto LABEL_4;
      }
    }
    return 3221225495LL;
  }
LABEL_4:
  v11 = 0;
  if ( (v9 & 0x1000) != 0 )
  {
    v11 = MiCommitPoolMemory((_DWORD)a1, (_DWORD)a2, v9 | v8, a4, a5);
    if ( v11 < 0 )
    {
      if ( v10 )
        MmFreePoolMemory(a1, a2, 0x8000LL);
      *a1 = 0LL;
    }
    *a2 = (*a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  }
  return (unsigned int)v11;
}
