/*
 * XREFs of ?GetDispatchersName@CHidInput@@EEAAXPEAW4DispatcherHandleName@CRIMBase@@PEAI@Z @ 0x1C00AE9D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHidInput::GetDispatchersName(
        CHidInput *this,
        enum CRIMBase::DispatcherHandleName *a2,
        unsigned int *a3)
{
  *a3 = 14;
  *(_OWORD *)a2 = xmmword_1C01DBE88;
  *((_OWORD *)a2 + 1) = xmmword_1C01DBE98;
  *((_OWORD *)a2 + 2) = xmmword_1C01DBEA8;
  *((_QWORD *)a2 + 6) = 0xF0000000ELL;
}
