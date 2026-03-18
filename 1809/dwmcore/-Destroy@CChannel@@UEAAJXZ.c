/*
 * XREFs of ?Destroy@CChannel@@UEAAJXZ @ 0x180146130
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CChannel@@UEAAKXZ @ 0x1800780C0 (-Release@CChannel@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?DestroyChannel@CConnection@@QEAAJI@Z @ 0x180145594 (-DestroyChannel@CConnection@@QEAAJI@Z.c)
 */

__int64 __fastcall CChannel::Destroy(CChannel *this)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx

  v2 = CConnection::DestroyChannel(*((CConnection **)this + 6), *((_DWORD *)this + 14));
  v4 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x20Eu);
  CChannel::Release(this);
  return v4;
}
