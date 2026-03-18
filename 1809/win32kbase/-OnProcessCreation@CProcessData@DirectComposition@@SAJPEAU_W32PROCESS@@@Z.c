/*
 * XREFs of ?OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z @ 0x1C0058778
 * Callers:
 *     DCompositionProcessCallout @ 0x1C0058730 (DCompositionProcessCallout.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0019A40 (Win32AllocPoolWithQuotaZInit.c)
 *     ?OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1C0058808 (-OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     ?OnProcessCreation@CConnection@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1C00588F8 (-OnProcessCreation@CConnection@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     ??_GCProcessData@DirectComposition@@AEAAPEAXI@Z @ 0x1C0058988 (--_GCProcessData@DirectComposition@@AEAAPEAXI@Z.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

__int64 __fastcall DirectComposition::CProcessData::OnProcessCreation(struct _W32PROCESS *a1)
{
  struct DirectComposition::CProcessData *v2; // rax
  struct DirectComposition::CProcessData *v3; // rdi
  signed int v4; // ebx
  unsigned int v5; // edx

  v2 = (struct DirectComposition::CProcessData *)Win32AllocPoolWithQuotaZInit(0x30uLL, 0x64704344u);
  v3 = v2;
  if ( v2 )
    memset(v2, 0, 0x30uLL);
  else
    v3 = 0LL;
  v4 = v3 == 0LL ? 0xC0000017 : 0;
  if ( v3 )
  {
    v4 = DirectComposition::CConnection::OnProcessCreation(v3);
    if ( v4 >= 0 )
      v4 = DirectComposition::CChannel::OnProcessCreation(v3);
    if ( v4 < 0 )
    {
      DirectComposition::CProcessData::`scalar deleting destructor'(v3, v5);
      v3 = 0LL;
    }
  }
  *((_QWORD *)a1 + 32) = v3;
  return (unsigned int)v4;
}
