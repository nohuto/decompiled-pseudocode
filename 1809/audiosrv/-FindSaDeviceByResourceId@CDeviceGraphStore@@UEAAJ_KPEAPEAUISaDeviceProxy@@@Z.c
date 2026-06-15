/*
 * XREFs of ?FindSaDeviceByResourceId@CDeviceGraphStore@@UEAAJ_KPEAPEAUISaDeviceProxy@@@Z @ 0x1800E7870
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@2@PEAU32@@Z @ 0x1800CAFAC (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 */

__int64 __fastcall CDeviceGraphStore::FindSaDeviceByResourceId(
        CDeviceGraphStore *this,
        __int64 a2,
        struct ISaDeviceProxy **a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  _QWORD *i; // rax
  unsigned int v10; // ebx

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  *a3 = 0LL;
  v7 = (_QWORD *)**((_QWORD **)this + 7);
  while ( v7 != *((_QWORD **)this + 7) )
  {
    if ( (*(int (__fastcall **)(_QWORD, __int64, struct ISaDeviceProxy **))(*(_QWORD *)v7[8] + 152LL))(v7[8], a2, a3) >= 0 )
    {
      v10 = 0;
      goto LABEL_14;
    }
    if ( !*((_BYTE *)v7 + 25) )
    {
      v8 = v7[2];
      if ( *(_BYTE *)(v8 + 25) )
      {
        for ( i = (_QWORD *)v7[1]; !*((_BYTE *)i + 25) && v7 == (_QWORD *)i[2]; i = (_QWORD *)i[1] )
          v7 = i;
      }
      else
      {
        i = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::wstring>>>::_Min((_QWORD *)v8);
      }
      v7 = i;
    }
  }
  v10 = -2005139430;
LABEL_14:
  if ( v3 )
    LeaveCriticalSection(v3);
  return v10;
}
