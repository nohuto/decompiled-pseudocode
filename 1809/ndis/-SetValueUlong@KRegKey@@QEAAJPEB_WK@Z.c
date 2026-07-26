/*
 * XREFs of ?SetValueUlong@KRegKey@@QEAAJPEB_WK@Z @ 0x1C00BAC70
 * Callers:
 *     ndisCheckNetworkInterfaceDataMismatch @ 0x1C00C8AA0 (ndisCheckNetworkInterfaceDataMismatch.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall KRegKey::SetValueUlong(KRegKey *this, wchar_t *a2, int a3)
{
  __int64 v3; // r10
  wchar_t *v4; // rax
  NTSTATUS result; // eax
  __int16 v6; // r9
  void *m_ptr; // rcx
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  int Data; // [rsp+58h] [rbp+10h] BYREF

  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  if ( !a2 )
    goto LABEL_9;
  v3 = 0x7FFFLL;
  v4 = a2;
  do
  {
    if ( !*v4 )
      break;
    ++v4;
    --v3;
  }
  while ( v3 );
  result = v3 == 0 ? 0xC000000D : 0;
  if ( v3 )
    v6 = 0x7FFF - v3;
  else
    v6 = 0;
  if ( v3 )
  {
    ValueName.Buffer = a2;
    ValueName.Length = 2 * v6;
    ValueName.MaximumLength = 2 * v6 + 2;
LABEL_9:
    m_ptr = this->m_ptr;
    Data = a3;
    return ZwSetValueKey(m_ptr, &ValueName, 0, 4u, &Data, 4u);
  }
  return result;
}
