/*
 * XREFs of ?Create@CEvent@DirectComposition@@SAJPEAU_KEVENT@@HPEAPEAV12@@Z @ 0x1C01A56F8
 * Callers:
 *     ?VisualCaptureBits@CApplicationChannel@DirectComposition@@QEAAJIHHIIW4DXGI_FORMAT@@PEAX1@Z @ 0x1C01A6804 (-VisualCaptureBits@CApplicationChannel@DirectComposition@@QEAAJIHHIIW4DXGI_FORMAT@@PEAX1@Z.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0013920 (Win32AllocPoolWithQuotaZInit.c)
 */

__int64 __fastcall DirectComposition::CEvent::Create(PVOID Object, __int64 a2, struct DirectComposition::CEvent **a3)
{
  unsigned int v4; // edi
  struct DirectComposition::CEvent *v6; // rax

  v4 = 0;
  v6 = (struct DirectComposition::CEvent *)Win32AllocPoolWithQuotaZInit(0x10uLL, 0x76654344u);
  *a3 = v6;
  if ( v6 )
  {
    *((_QWORD *)v6 + 1) = Object;
    ObfReferenceObject(Object);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v4;
}
