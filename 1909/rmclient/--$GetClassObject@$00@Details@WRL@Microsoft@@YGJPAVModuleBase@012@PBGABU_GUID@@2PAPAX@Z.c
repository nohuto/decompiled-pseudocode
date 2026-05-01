/*
 * XREFs of ??$GetClassObject@$00@Details@WRL@Microsoft@@YGJPAVModuleBase@012@PBGABU_GUID@@2PAPAX@Z @ 0x1000EEE1
 * Callers:
 *     _DllGetClassObject@12 @ 0x1000F620 (_DllGetClassObject@12.c)
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 *     _memcmp @ 0x1000D148 (_memcmp.c)
 *     ?GetCacheEntry@Details@WRL@Microsoft@@YGJPAVModuleBase@123@PAIABU_GUID@@PBUCreatorMap@123@PAPAUIUnknown@@@Z @ 0x1000F1FC (-GetCacheEntry@Details@WRL@Microsoft@@YGJPAVModuleBase@123@PAIABU_GUID@@PBUCreatorMap@123@PAPAUI.c)
 */

int __thiscall Microsoft::WRL::Details::GetClassObject<1>(
        void *this,
        void *Buf2,
        Microsoft::WRL::Details *a3,
        unsigned int *a4)
{
  const void ***v5; // edi
  unsigned int v6; // eax
  const void **v7; // esi
  const struct _GUID *v9; // [esp+0h] [ebp-10h]
  const struct Microsoft::WRL::Details::CreatorMap *v10; // [esp+4h] [ebp-Ch]
  struct IUnknown **v11; // [esp+8h] [ebp-8h]
  unsigned int v12; // [esp+Ch] [ebp-4h]

  *a4 = 0;
  v5 = (const void ***)((*(int (__thiscall **)(_DWORD, void *))(*(_DWORD *)this + 16))(
                          *(_DWORD *)(*(_DWORD *)this + 16),
                          this)
                      + 4);
  v6 = (*(int (__thiscall **)(_DWORD, void *))(*(_DWORD *)this + 20))(*(_DWORD *)(*(_DWORD *)this + 20), this);
  v12 = v6;
  while ( 1 )
  {
    if ( (unsigned int)v5 >= v6 )
      return -2147221231;
    v7 = *v5;
    if ( *v5 )
      break;
LABEL_5:
    ++v5;
  }
  if ( memcmp(v7[1], Buf2, 0x10u) )
  {
    v6 = v12;
    goto LABEL_5;
  }
  return Microsoft::WRL::Details::GetCacheEntry(a3, (struct Microsoft::WRL::Details::ModuleBase *)v7, a4, v9, v10, v11);
}
