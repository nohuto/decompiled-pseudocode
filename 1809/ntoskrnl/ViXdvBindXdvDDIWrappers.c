/*
 * XREFs of ViXdvBindXdvDDIWrappers @ 0x140929350
 * Callers:
 *     ViXdvDriverLoadImage @ 0x140929510 (ViXdvDriverLoadImage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     VfUtilDbgPrint @ 0x140309C3C (VfUtilDbgPrint.c)
 *     ViXdvSearchAllThunkArrays @ 0x140929764 (ViXdvSearchAllThunkArrays.c)
 */

char __fastcall ViXdvBindXdvDDIWrappers(__int64 (__fastcall *a1)(int *))
{
  char result; // al
  char v2; // bl
  _DWORD *v3; // rax
  _DWORD *v4; // rdi
  unsigned int i; // r11d

  result = (char)a1;
  v2 = 0;
  ViXdvThunksNoXdvEntry = 0;
  ViXdvThunksBoundToXdv = 0;
  ViXdvThunksNotFound = 0;
  ViXdvThunksNotPristine = 0;
  ViXdvThunksShared = 0;
  if ( a1 )
  {
    v3 = (_DWORD *)a1(VfRuleClasses);
    v4 = v3;
    if ( v3 )
    {
      if ( *v3 == 4 )
      {
        for ( i = 0; i < v4[1]; ++i )
        {
          if ( *(_QWORD *)&v4[2 * i + 2] )
          {
            if ( !(unsigned __int8)ViXdvSearchAllThunkArrays(i) )
              ++ViXdvThunksNotFound;
          }
          else
          {
            ++ViXdvThunksNoXdvEntry;
          }
        }
        return 1;
      }
      else
      {
        VfUtilDbgPrint("XDV DDI version mismatch: kernel version %d   driver version %d\n", 4, *v3);
      }
    }
    return v2;
  }
  return result;
}
