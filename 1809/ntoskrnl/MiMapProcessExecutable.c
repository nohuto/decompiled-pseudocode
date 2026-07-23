/*
 * XREFs of MiMapProcessExecutable @ 0x140678E08
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x14067AA78 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFillPteHierarchy @ 0x140099020 (MiFillPteHierarchy.c)
 *     PsMapSystemDlls @ 0x140678D30 (PsMapSystemDlls.c)
 *     MiCfgInitializeProcess @ 0x140678F10 (MiCfgInitializeProcess.c)
 *     MmMapViewOfSection @ 0x140679D20 (MmMapViewOfSection.c)
 *     MiSessionCreate @ 0x1407162A8 (MiSessionCreate.c)
 */

__int64 __fastcall MiMapProcessExecutable(_KPROCESS *a1, __int64 a2, unsigned int *a3)
{
  unsigned int v6; // eax
  __int64 v7; // rsi
  int v8; // eax
  unsigned __int64 v9; // rcx
  int v10; // ebx
  int v11; // r11d
  int v12; // eax
  int v13; // eax
  __int64 result; // rax
  unsigned __int64 v15; // rcx
  char v16; // al
  int v17; // r10d
  __int64 v18; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v19[8]; // [rsp+58h] [rbp-40h] BYREF
  unsigned __int64 v20; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v21; // [rsp+B8h] [rbp+20h] BYREF

  if ( (*(_DWORD *)(a2 + 56) & 0x20) == 0 )
    return 3221225545LL;
  if ( (*a3 & 0x80u) == 0 || (result = MiSessionCreate(), (int)result >= 0) )
  {
    v6 = *a3;
    v21 = 0LL;
    v20 = 0LL;
    v7 = 4LL;
    v18 = 0LL;
    v8 = MmMapViewOfSection(a2, a1, &v20, 0LL, 0LL, &v18, &v21, 1, (unsigned __int8)(v6 & 0x10) << 25, 4);
    v9 = v20;
    v10 = v8;
    a1[1].Affinity.Bitmap[18] = v20;
    if ( v8 >= 0 )
    {
      v11 = 0;
      if ( (*a3 & 0x10) != 0 )
      {
        MiFillPteHierarchy(v9, v19);
        do
        {
          v15 = v19[--v7];
          v16 = MI_READ_PTE_LOCK_FREE(v15);
          if ( (v16 & 1) == 0 )
            break;
          if ( v16 < 0 )
          {
            v11 = 1;
            break;
          }
        }
        while ( v7 != 1 );
        if ( v11 )
          v11 = (v17 & 0x20) != 0 ? v11 : 0;
        else
          *a3 = v17 & 0xFFFFFFEF;
      }
      v12 = PsMapSystemDlls(a1, v11);
      if ( v12 < 0 )
        v10 = v12;
      if ( v10 >= 0 )
      {
        v13 = MiCfgInitializeProcess(a1);
        if ( v13 < 0 )
          return (unsigned int)v13;
      }
    }
    return (unsigned int)v10;
  }
  return result;
}
