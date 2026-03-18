/*
 * XREFs of ?GetMdl@FxRequestSystemBuffer@@UEAAPEAU_MDL@@XZ @ 0x1C0057DD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_MDL *__fastcall FxRequestSystemBuffer::GetMdl(FxRequestSystemBuffer *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this[-7].m_Buffer + 23);
  if ( (unsigned __int8)(*(_BYTE *)v1 - 3) <= 1u
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 40) + 64LL) - 48LL) + 212LL) == 3 )
  {
    return this->m_Mdl;
  }
  else
  {
    return 0LL;
  }
}
