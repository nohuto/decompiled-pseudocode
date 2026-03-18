/*
 * XREFs of MiProcessVaRangesInfoClass @ 0x1406E18AC
 * Callers:
 *     NtSetInformationVirtualMemory @ 0x1405E9E10 (NtSetInformationVirtualMemory.c)
 *     MmSetPriorityVaRanges @ 0x14088AA24 (MmSetPriorityVaRanges.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x140050550 (MiUnlockAndDereferenceVad.c)
 *     MiVadSupportsPrivateCommit @ 0x1400507D0 (MiVadSupportsPrivateCommit.c)
 *     MiObtainReferencedVadEx @ 0x140050810 (MiObtainReferencedVadEx.c)
 *     MiMoveDirtyBitsToPfns @ 0x140052C00 (MiMoveDirtyBitsToPfns.c)
 *     MiIsVadLarge @ 0x1400577A0 (MiIsVadLarge.c)
 *     MiWalkVaRange @ 0x1400BE0F4 (MiWalkVaRange.c)
 */

__int64 __fastcall MiProcessVaRangesInfoClass(unsigned __int64 a1, __int128 *a2, int a3, unsigned int a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // esi
  __int64 v8; // r13
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v16; // rdx
  unsigned int v17; // [rsp+30h] [rbp-58h] BYREF
  __int128 v18; // [rsp+38h] [rbp-50h]
  int v19; // [rsp+90h] [rbp+8h]

  v4 = 0;
  v5 = 0;
  if ( a1 )
  {
    while ( 2 )
    {
      v18 = *a2;
      v8 = *((_QWORD *)&v18 + 1);
      v9 = v18;
      do
      {
        v10 = v9;
        v11 = MiObtainReferencedVadEx(v9, 0, (int *)&v17);
        v12 = v11;
        if ( !v11 )
          return v17;
        v19 = 0;
        v13 = *(unsigned int *)(v11 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 33) << 32);
        if ( ((v9 + v8 - 1) | 0xFFF) >> 12 > v13 )
        {
          v19 = 1;
          v16 = (v13 << 12) | 0xFFF;
          v8 = v9 - v16 + v8 - 1;
          v9 = v16 + 1;
        }
        if ( !MiVadSupportsPrivateCommit(v11) || (unsigned int)MiIsVadLarge(v12) )
        {
          v4 = 1073741849;
        }
        else if ( a3 == 1 )
        {
          MiWalkVaRange(v10, v14, v12, 2u, a4);
        }
        else if ( (*(_DWORD *)(v12 + 48) & 0x5100000) == 0x4100000 )
        {
          v4 = -1073741637;
        }
        else
        {
          MiMoveDirtyBitsToPfns(v10, v14, 0LL, 2);
        }
        MiUnlockAndDereferenceVad((char *)v12);
      }
      while ( v19 == 1 );
      ++v5;
      ++a2;
      if ( v5 < a1 )
        continue;
      break;
    }
  }
  return v4;
}
