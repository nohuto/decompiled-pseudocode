/*
 * XREFs of ??1CGenericInkMarshaler@DirectComposition@@UEAA@XZ @ 0x1C01A2BCC
 * Callers:
 *     ??_GCGenericInkMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01A2E40 (--_GCGenericInkMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CGenericInkMarshaler::~CGenericInkMarshaler(
        DirectComposition::CGenericInkMarshaler *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &DirectComposition::CGenericInkMarshaler::`vftable';
  v2 = *((_QWORD *)this + 10);
  if ( v2 )
    Win32FreePool(v2);
  v3 = *((_QWORD *)this + 5);
  if ( v3 )
    Win32FreePool(v3);
}
