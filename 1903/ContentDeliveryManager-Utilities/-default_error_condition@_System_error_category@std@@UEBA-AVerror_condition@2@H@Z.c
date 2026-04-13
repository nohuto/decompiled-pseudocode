/*
 * XREFs of ?default_error_condition@_System_error_category@std@@UEBA?AVerror_condition@2@H@Z @ 0x1800053B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Syserror_map@std@@YAPEBDH@Z @ 0x1800AE020 (-_Syserror_map@std@@YAPEBDH@Z.c)
 */

__int64 __fastcall std::_System_error_category::default_error_condition(__int64 a1, __int64 a2, int a3)
{
  bool v5; // zf
  void ***v6; // rax

  v5 = std::_Syserror_map(a3) == 0LL;
  *(_DWORD *)a2 = a3;
  v6 = &std::_Error_objects<int>::_Generic_object;
  if ( v5 )
    v6 = std::_Error_objects<int>::_System_object;
  *(_QWORD *)(a2 + 8) = v6;
  return a2;
}
