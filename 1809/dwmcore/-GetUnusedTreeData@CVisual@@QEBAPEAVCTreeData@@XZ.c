/*
 * XREFs of ?GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ @ 0x180021A6C
 * Callers:
 *     ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x1800034A0 (-ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 *     ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x1800218E0 (-EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18004D570 (--1CVisual@@MEAA@XZ.c)
 *     ?ReleaseTreeDatas@CVisualTree@@AEAAXXZ @ 0x18008B8A0 (-ReleaseTreeDatas@CVisualTree@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

struct CTreeData *__fastcall CVisual::GetUnusedTreeData(CVisual *this)
{
  _DWORD *v1; // r8
  __int64 v3; // rdx
  _BYTE *v4; // r9
  char *v5; // rcx
  unsigned int i; // eax

  v1 = (_DWORD *)*((_QWORD *)this + 28);
  if ( (*v1 & 0x4000000) == 0 )
    return 0LL;
  v3 = (unsigned int)v1[1];
  v4 = v1 + 2;
  v5 = 0LL;
  for ( i = 0; i < (unsigned int)v3; ++v4 )
  {
    if ( *v4 == 6 )
      break;
    ++i;
  }
  if ( i < (unsigned int)v3 )
    v5 = (char *)v1 + v3 + 8LL * i - (((_BYTE)v3 + 15) & 7) + 15;
  return *(struct CTreeData **)v5;
}
