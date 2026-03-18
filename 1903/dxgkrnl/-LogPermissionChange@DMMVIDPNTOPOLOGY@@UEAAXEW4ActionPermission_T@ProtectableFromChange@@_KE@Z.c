/*
 * XREFs of ?LogPermissionChange@DMMVIDPNTOPOLOGY@@UEAAXEW4ActionPermission_T@ProtectableFromChange@@_KE@Z @ 0x1C013E0E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall DMMVIDPNTOPOLOGY::LogPermissionChange(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5)
{
  __int64 v6; // rbp
  unsigned __int8 v8; // si
  __int64 v9; // rcx
  _QWORD *result; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rax

  v6 = (int)a3;
  v8 = a2;
  if ( (_DWORD)a3 == 1 )
  {
    v9 = (unsigned __int8)a2;
    if ( !(_BYTE)a2 )
      goto LABEL_6;
    v9 = (unsigned int)(unsigned __int8)a2 - 1;
    if ( (unsigned __int8)a2 == 1 )
      goto LABEL_6;
    v9 = (unsigned int)(unsigned __int8)a2 - 2;
    if ( (unsigned __int8)a2 == 2 )
    {
      result = (_QWORD *)WdLogNewEntry5_WdTrace(v9, a2);
      result[4] = a5;
      result[5] = a1 - 56;
      goto LABEL_7;
    }
    if ( (unsigned __int8)a2 == 3 )
    {
LABEL_6:
      result = (_QWORD *)WdLogNewEntry5_WdTrace(v9, a2);
      result[4] = a1 - 56;
LABEL_7:
      result[3] = a4;
      return result;
    }
    goto LABEL_14;
  }
  if ( (_DWORD)a3 != 2 )
  {
    v11 = WdLogNewEntry5_WdError((unsigned int)(a3 - 1), a2, a3);
    *(_QWORD *)(v11 + 24) = v6;
    return (_QWORD *)WdLogEvent5_WdError(v11);
  }
  v12 = (unsigned __int8)a2;
  v9 = (unsigned __int8)a2;
  if ( (_BYTE)a2 )
  {
    v9 = (unsigned int)(unsigned __int8)a2 - 1;
    if ( (unsigned __int8)a2 != 1 )
    {
      v9 = (unsigned int)(unsigned __int8)a2 - 2;
      if ( (unsigned int)v9 >= 2 )
      {
LABEL_14:
        v11 = WdLogNewEntry5_WdError(v9, a2, a3);
        *(_QWORD *)(v11 + 24) = v8;
        return (_QWORD *)WdLogEvent5_WdError(v11);
      }
    }
  }
  v14 = WdLogNewEntry5_WdTrace(v9, a2);
  *(_QWORD *)(v14 + 24) = a1 - 56;
  if ( v12 >= *(_QWORD *)(a1 + 80) )
  {
    v15 = WdLogNewEntry5_WdAssertion(a1 - 56, v13);
    WdLogEvent5_WdAssertion(v15);
  }
  result = *(_QWORD **)(*(_QWORD *)(a1 + 88) + 8 * v12);
  *(_QWORD *)(v14 + 32) = result;
  return result;
}
