/*
 * XREFs of MiRecheckVaVm @ 0x1401405A0
 * Callers:
 *     MiCrcStillIntact @ 0x14013ED60 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x14013F5C0 (MiSharePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiRecheckVaVm(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 DeepFreezeStartTime; // rdx
  __int16 v6; // r8
  __int64 v7; // rax

  v2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = *(_QWORD *)v2;
  if ( v2 >= 0xFFFFF6FB7DBED000uLL
    && v2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
  {
    if ( (v3 & 1) == 0 )
      return (v3 & 0xC00) == 0x800;
    if ( (v3 & 0x20) == 0 || (v3 & 0x42) == 0 )
    {
      DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
      if ( DeepFreezeStartTime )
      {
        v6 = v3 | 0x20;
        v7 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v2 >> 3) & 0x1FF));
        if ( (v7 & 0x20) == 0 )
          v6 = v3;
        LOWORD(v3) = v6;
        if ( (v7 & 0x42) != 0 )
          LOWORD(v3) = v6 | 0x42;
      }
    }
  }
  if ( (v3 & 1) != 0 )
    return 1LL;
  return (v3 & 0xC00) == 0x800;
}
