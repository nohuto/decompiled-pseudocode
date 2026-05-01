/*
 * XREFs of _winrt::immersive_shell_component::PublishServices_::_1_::dtor$9 @ 0x1800C1848
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UIObjectWithSite@@@winrt@@QEAA@XZ @ 0x1800A1994 (--1-$com_ptr@UIObjectWithSite@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::immersive_shell_component::PublishServices_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 160) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 160) &= ~2u;
    return winrt::com_ptr<IObjectWithSite>::~com_ptr<IObjectWithSite>((__int64 *)(a2 + 184));
  }
  return result;
}
