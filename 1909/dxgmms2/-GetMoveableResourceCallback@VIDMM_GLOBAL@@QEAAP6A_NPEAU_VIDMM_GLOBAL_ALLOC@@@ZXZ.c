/*
 * XREFs of ?GetMoveableResourceCallback@VIDMM_GLOBAL@@QEAAP6A_NPEAU_VIDMM_GLOBAL_ALLOC@@@ZXZ @ 0x1C00AC338
 * Callers:
 *     ?Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z @ 0x1C00BD6D0 (-Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z.c)
 *     ?DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z @ 0x1C00BF300 (-DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_.c)
 *     ?ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C00C16DC (-ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z.c)
 * Callees:
 *     <none>
 */

bool (__fastcall *__fastcall VIDMM_GLOBAL::GetMoveableResourceCallback(
        VIDMM_GLOBAL *this))(struct _VIDMM_GLOBAL_ALLOC *)
{
  bool (__fastcall *result)(struct _VIDMM_GLOBAL_ALLOC *); // rax

  if ( !*(_BYTE *)(*((_QWORD *)this + 3) + 2505LL) )
    return VIDMM_SEGMENT::IsMovableResourceNoDisplayingCB;
  result = VIDMM_SEGMENT::IsMovableResourceCB;
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 528LL) + 140LL) != 1 )
    return VIDMM_SEGMENT::IsMovableResourceNoDisplayingCB;
  return result;
}
