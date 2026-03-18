/*
 * XREFs of ?FindCopyProtection@ADAPTER_DISPLAY@@QEAAPEAVDXGCOPYPROTECTION@@IIPEAVDXGPROCESS@@@Z @ 0x1C01C2A30
 * Callers:
 *     ?DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z @ 0x1C01C1780 (-DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z.c)
 *     ?UpdateCopyProtection@ADAPTER_DISPLAY@@QEAAJIII@Z @ 0x1C01C54C8 (-UpdateCopyProtection@ADAPTER_DISPLAY@@QEAAJIII@Z.c)
 * Callees:
 *     <none>
 */

struct DXGCOPYPROTECTION *__fastcall ADAPTER_DISPLAY::FindCopyProtection(
        ADAPTER_DISPLAY *this,
        int a2,
        int a3,
        struct DXGPROCESS *a4)
{
  struct DXGCOPYPROTECTION *v4; // r10
  struct DXGCOPYPROTECTION *i; // rcx
  struct DXGCOPYPROTECTION *result; // rax

  v4 = (ADAPTER_DISPLAY *)((char *)this + 64);
  for ( i = (struct DXGCOPYPROTECTION *)*((_QWORD *)this + 8); ; i = *(struct DXGCOPYPROTECTION **)i )
  {
    result = 0LL;
    if ( i != v4 )
      result = i;
    if ( !result
      || *((_DWORD *)result + 12) == a3 && *((_DWORD *)result + 13) == a2 && *((struct DXGPROCESS **)result + 5) == a4 )
    {
      break;
    }
  }
  return result;
}
