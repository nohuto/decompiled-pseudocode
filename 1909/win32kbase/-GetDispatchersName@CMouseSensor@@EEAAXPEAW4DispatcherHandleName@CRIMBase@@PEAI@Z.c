/*
 * XREFs of ?GetDispatchersName@CMouseSensor@@EEAAXPEAW4DispatcherHandleName@CRIMBase@@PEAI@Z @ 0x1C00ABB50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMouseSensor::GetDispatchersName(
        CMouseSensor *this,
        enum CRIMBase::DispatcherHandleName *a2,
        unsigned int *a3)
{
  *a3 = 7;
  *(_OWORD *)a2 = xmmword_1C01DA0B8;
  *((_QWORD *)a2 + 2) = 0xB00000009LL;
  *((_DWORD *)a2 + 6) = 13;
}
