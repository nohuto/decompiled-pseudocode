/*
 * XREFs of ?s_MonitorEnumCallback@CVirtualDesktopSwitch@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z @ 0x1800A9B60
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002107C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

_BOOL8 __fastcall CVirtualDesktopSwitch::s_MonitorEnumCallback(HMONITOR a1, HDC a2, LPRECT a3, __int64 a4)
{
  _QWORD *v4; // rcx
  __int64 v5; // rax
  unsigned int v6; // edx
  int v7; // ebx
  int v8; // eax

  v4 = (_QWORD *)(a4 + 152);
  v5 = *(unsigned int *)(a4 + 176);
  v6 = v5 + 1;
  v7 = (int)v5 + 1 < (unsigned int)v5 ? 0x80070216 : 0;
  if ( (int)v5 + 1 >= (unsigned int)v5 )
  {
    if ( v6 > *(_DWORD *)(a4 + 172) )
    {
      v8 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v4, 0x10u, 1, a3);
      v7 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0xC0u);
    }
    else
    {
      *(struct tagRECT *)(*v4 + 16 * v5) = *a3;
      *(_DWORD *)(a4 + 176) = v6;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0xB5u);
  }
  return v7 >= 0;
}
