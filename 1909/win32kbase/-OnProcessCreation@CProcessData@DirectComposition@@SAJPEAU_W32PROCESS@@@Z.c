/*
 * XREFs of ?OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z @ 0x1C000FA78
 * Callers:
 *     DCompositionProcessCallout @ 0x1C000FA30 (DCompositionProcessCallout.c)
 * Callees:
 *     ??_GCProcessData@DirectComposition@@AEAAPEAXI@Z @ 0x1C000F91C (--_GCProcessData@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?OnProcessCreation@CConnection@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1C000FB00 (-OnProcessCreation@CConnection@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     ?OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1C000FB88 (-OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0014C30 (Win32AllocPoolWithQuotaZInit.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

__int64 __fastcall DirectComposition::CProcessData::OnProcessCreation(struct _W32PROCESS *a1)
{
  struct DirectComposition::CProcessData *v2; // rax
  struct DirectComposition::CProcessData *v3; // rbx
  int v4; // edi

  v2 = (struct DirectComposition::CProcessData *)Win32AllocPoolWithQuotaZInit(0x30uLL);
  v3 = v2;
  if ( v2 )
    memset(v2, 0, 0x30uLL);
  else
    v3 = 0LL;
  if ( v3 )
  {
    v4 = DirectComposition::CConnection::OnProcessCreation(v3);
    if ( v4 >= 0 )
      v4 = DirectComposition::CChannel::OnProcessCreation(v3);
    if ( v4 < 0 )
    {
      DirectComposition::CProcessData::`scalar deleting destructor'(v3);
      v3 = 0LL;
    }
  }
  else
  {
    v4 = -1073741801;
  }
  *((_QWORD *)a1 + 32) = v3;
  return (unsigned int)v4;
}
