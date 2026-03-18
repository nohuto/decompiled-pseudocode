/*
 * XREFs of ?InsertVadToReservedListForNewVaRange@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@@Z @ 0x1C007CEF0
 * Callers:
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C0059008 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 * Callees:
 *     McTemplateK0pqxx @ 0x1C0027E94 (McTemplateK0pqxx.c)
 *     ?CompareVadRangeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C007CDF4 (-CompareVadRangeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

void __fastcall CVirtualAddressAllocator::InsertVadToReservedListForNewVaRange(
        CVirtualAddressAllocator *this,
        struct VIDMM_VAD *a2,
        struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE a3)
{
  struct _RTL_BALANCED_NODE *v3; // rsi
  char v4; // di
  char v5; // bl
  const GUID *v8; // r8
  _DWORD *v9; // rax
  __int64 v10; // rcx
  struct _RTL_BALANCED_NODE *v11; // rax

  v3 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 6);
  v4 = 0;
  v5 = (char)a3.0;
  if ( v3 )
  {
    while ( 1 )
    {
      if ( (int)CompareVadRangeAvl((char *)a2, v3) < 0 )
      {
        v11 = v3->Children[0];
        if ( !v3->Children[0] )
          break;
      }
      else
      {
        v11 = v3->Children[1];
        if ( !v11 )
        {
          v4 = 1;
          break;
        }
      }
      v3 = v11;
    }
  }
  *(_BYTE *)&a3.0 = v4;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))RtlAvlInsertNodeEx)((char *)this + 48, v3, a3.0, a2);
  v9 = (_DWORD *)((char *)a2 + 72);
  if ( (v5 & 0x10) != 0 )
    *v9 |= 0x800u;
  if ( (v5 & 8) != 0 || (v5 & 4) != 0 )
    v10 = *((_DWORD *)a2 + 18) & 0xFFFFFFF0 | 2;
  else
    v10 = *v9 & 0xFFFFFFF0 | 3;
  *v9 = v10;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
    McTemplateK0pqxx(v10, &CreateGpuVirtualAddressRange, v8, this, v10, *((_QWORD *)a2 + 3), *((_QWORD *)a2 + 4));
}
