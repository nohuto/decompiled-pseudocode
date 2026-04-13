/*
 * XREFs of ?UpdateStringRepresentation@CorrelationVectorWrapper@Background@ContentDeliveryManager@@AEAAXXZ @ 0x180026AA8
 * Callers:
 *     ??0?$_Ref_count_obj@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@XZ @ 0x180036EC0 (--0-$_Ref_count_obj@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@XZ.c)
 *     ?GetCorrelationVector@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@PEAUHSTRING__@@@Z @ 0x180063DF0 (-GetCorrelationVector@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VCorrelationV.c)
 * Callees:
 *     <none>
 */

void __fastcall ContentDeliveryManager::Background::CorrelationVectorWrapper::UpdateStringRepresentation(
        ContentDeliveryManager::Background::CorrelationVectorWrapper *this)
{
  unsigned __int8 *v1; // rbx
  _BYTE *v2; // rsi
  __int64 v3; // rdi
  const char *v4; // r8

  v1 = *(unsigned __int8 **)this;
  v2 = (char *)this + 8;
  v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)this + 136LL), 0LL);
  if ( this != (ContentDeliveryManager::Background::CorrelationVectorWrapper *)-8LL )
  {
    *v2 = 0;
    if ( !memcpy_s((char *)this + 8, v1[130], v1, WORD2(v3)) )
    {
      if ( v3 >= 0 || (_DWORD)v3 )
      {
        v4 = "%u!";
        if ( v3 >= 0 )
          v4 = "%u";
        sprintf_s(&v2[v1[129]], v1[130] - (unsigned __int64)v1[129], v4, (unsigned int)v3);
      }
      else
      {
        v2[v1[129]] = 33;
        v2[v1[129] + 1] = 0;
      }
    }
  }
}
