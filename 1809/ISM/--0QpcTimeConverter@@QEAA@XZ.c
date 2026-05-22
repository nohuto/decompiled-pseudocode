/*
 * XREFs of ??0QpcTimeConverter@@QEAA@XZ @ 0x18007247C
 * Callers:
 *     ??0LampArrayRawInputProvider@@AEAA@XZ @ 0x1800701D0 (--0LampArrayRawInputProvider@@AEAA@XZ.c)
 *     ?Create@EdgyProcessor@@SAJPEAPEAV1@@Z @ 0x1800CA674 (-Create@EdgyProcessor@@SAJPEAPEAV1@@Z.c)
 *     ??$MakeAndInitialize@UDeviceState@MagnifierProcessor@@U12@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@012@@Z @ 0x1800CF72C (--$MakeAndInitialize@UDeviceState@MagnifierProcessor@@U12@$$V@Details@WRL@Microsoft@@YAJV-$ComPt.c)
 * Callees:
 *     <none>
 */

QpcTimeConverter *__fastcall QpcTimeConverter::QpcTimeConverter(QpcTimeConverter *this)
{
  BOOL v2; // eax
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rcx
  LARGE_INTEGER Frequency; // [rsp+30h] [rbp+8h] BYREF

  *((_QWORD *)this + 1) = 1000000LL;
  v2 = QueryPerformanceFrequency(&Frequency);
  v3 = Frequency.QuadPart & -(__int64)v2;
  *(_QWORD *)this = v3;
  if ( v3 > 0x10C6F7A0B5EDLL )
  {
    v4 = *((_QWORD *)this + 1);
    do
    {
      if ( v4 < 0xA )
        break;
      v5 = *(_QWORD *)this / 0xAuLL;
      *(_QWORD *)this = v5;
      v4 /= 0xAuLL;
      *((_QWORD *)this + 1) = v4;
    }
    while ( v5 > 0x10C6F7A0B5EDLL );
  }
  return this;
}
