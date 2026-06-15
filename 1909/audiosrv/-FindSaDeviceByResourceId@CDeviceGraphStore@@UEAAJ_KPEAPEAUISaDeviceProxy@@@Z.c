/*
 * XREFs of ?FindSaDeviceByResourceId@CDeviceGraphStore@@UEAAJ_KPEAPEAUISaDeviceProxy@@@Z @ 0x1800F24F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@2@PEAU32@@Z @ 0x1800D94F0 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 */

__int64 __fastcall CDeviceGraphStore::FindSaDeviceByResourceId(
        CDeviceGraphStore *this,
        __int64 a2,
        struct ISaDeviceProxy **a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  _QWORD *i; // rbx
  __int64 v8; // rcx
  _QWORD *j; // rax
  unsigned int v10; // ebx

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  *a3 = 0LL;
  for ( i = (_QWORD *)**((_QWORD **)this + 7); i != *((_QWORD **)this + 7); i = j )
  {
    if ( (*(int (__fastcall **)(_QWORD, __int64, struct ISaDeviceProxy **))(*(_QWORD *)i[8] + 152LL))(i[8], a2, a3) >= 0 )
    {
      v10 = 0;
      goto LABEL_14;
    }
    v8 = i[2];
    if ( *(_BYTE *)(v8 + 25) )
    {
      for ( j = (_QWORD *)i[1]; !*((_BYTE *)j + 25) && i == (_QWORD *)j[2]; j = (_QWORD *)j[1] )
        i = j;
    }
    else
    {
      j = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::wstring>>>::_Min((_QWORD *)v8);
    }
  }
  v10 = -2005139430;
LABEL_14:
  if ( v3 )
    LeaveCriticalSection(v3);
  return v10;
}
