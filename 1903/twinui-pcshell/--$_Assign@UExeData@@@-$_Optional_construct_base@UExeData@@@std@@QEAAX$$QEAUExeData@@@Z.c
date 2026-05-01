/*
 * XREFs of ??$_Assign@UExeData@@@?$_Optional_construct_base@UExeData@@@std@@QEAAX$$QEAUExeData@@@Z @ 0x1800AA634
 * Callers:
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x1800AD89C (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 * Callees:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801F792C (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

_OWORD *__fastcall std::_Optional_construct_base<ExeData>::_Assign<ExeData>(__int64 a1, __int64 a2)
{
  _OWORD *v2; // rdi
  _OWORD *v3; // rbx
  _OWORD *result; // rax

  v2 = (_OWORD *)(a1 + 40);
  *(_DWORD *)a1 = *(_DWORD *)a2;
  v3 = (_OWORD *)(a2 + 40);
  result = (_OWORD *)(a2 + 8);
  if ( *(_BYTE *)(a1 + 72) )
  {
    std::wstring::operator=(a1 + 8, a2 + 8);
    return (_OWORD *)std::wstring::operator=(v2, v3);
  }
  else
  {
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_OWORD *)(a1 + 8) = *result;
    *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 24);
    *(_QWORD *)(a2 + 24) = 0LL;
    *(_QWORD *)(a2 + 32) = 7LL;
    *(_WORD *)result = 0;
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_QWORD *)(a1 + 64) = 0LL;
    *v2 = *v3;
    *(_OWORD *)(a1 + 56) = *(_OWORD *)(a2 + 56);
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_QWORD *)(a2 + 64) = 7LL;
    *(_WORD *)v3 = 0;
    *(_BYTE *)(a1 + 72) = 1;
  }
  return result;
}
