/*
 * XREFs of ??0InputConfigContextProvider@@IEAA@XZ @ 0x180015544
 * Callers:
 *     ?Create@InputConfigContextProvider@@SAJPEAPEAUISystemContextProvider@@@Z @ 0x18001B93C (-Create@InputConfigContextProvider@@SAJPEAPEAUISystemContextProvider@@@Z.c)
 * Callees:
 *     ??0SystemContextProvider@@IEAA@XZ @ 0x1800155BC (--0SystemContextProvider@@IEAA@XZ.c)
 */

InputConfigContextProvider *__fastcall InputConfigContextProvider::InputConfigContextProvider(
        InputConfigContextProvider *this)
{
  SystemContextProvider::SystemContextProvider(this);
  *(_QWORD *)this = &InputConfigContextProvider::`vftable'{for `ISystemContextProvider'};
  *((_QWORD *)this + 1) = &InputConfigContextProvider::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  return this;
}
