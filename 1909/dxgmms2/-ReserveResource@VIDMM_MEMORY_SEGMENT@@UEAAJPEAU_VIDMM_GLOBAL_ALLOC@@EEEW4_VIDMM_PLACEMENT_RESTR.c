/*
 * XREFs of ?ReserveResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@_K@Z @ 0x1C007E490
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0017608 (-AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@_K@Z @ 0x1C007E530 (-ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::ReserveResource(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  VIDMM_CPU_HOST_APERTURE *v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax

  if ( (*(_DWORD *)(a2 + 84) & 0x20) == 0 || (*(_DWORD *)(a1 + 80) & 4) != 0 || *(_QWORD *)(a1 + 488) )
  {
    LODWORD(v5) = VIDMM_SEGMENT::ReserveResource(a1, a2, a3);
    if ( (int)v5 >= 0 && (*(_DWORD *)(a2 + 84) & 0x20) != 0 )
    {
      v7 = *(VIDMM_CPU_HOST_APERTURE **)(a1 + 488);
      if ( v7 )
      {
        v8 = VIDMM_CPU_HOST_APERTURE::AcquireRange(v7, (struct _VIDMM_GLOBAL_ALLOC *)a2);
        v5 = v8;
        if ( v8 < 0 )
        {
          v12 = WdLogNewEntry5_WdWarning(v10, v9);
          *(_QWORD *)(v12 + 24) = a1;
          *(_QWORD *)(v12 + 32) = v5;
          WdLogEvent5_WdWarning(v12);
          (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 24LL))(
            a1,
            a2,
            *(_QWORD *)(a2 + 208),
            *(_QWORD *)(a2 + 16));
          *(_QWORD *)(a2 + 224) = 0LL;
          *(_QWORD *)(a2 + 208) = 0LL;
        }
      }
    }
    return (unsigned int)v5;
  }
  else
  {
    v11 = WdLogNewEntry5_WdWarning(a1, a2);
    *(_QWORD *)(v11 + 24) = a1;
    WdLogEvent5_WdWarning(v11);
    return 3221225473LL;
  }
}
