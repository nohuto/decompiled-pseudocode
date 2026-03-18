/*
 * XREFs of ?AddDripsBlocker@DripsBlockerInfoList@@QEAAJW4_SLEEPSTUDY_CONNECTION_ID@@U_STRING@@_K2K@Z @ 0x1C020DE8C
 * Callers:
 *     ?FinalizeTracking@DripsBlockerTrackingHelper@@QEAAXPEAVDripsBlockerInfoList@@@Z @ 0x1C020F5CC (-FinalizeTracking@DripsBlockerTrackingHelper@@QEAAXPEAVDripsBlockerInfoList@@@Z.c)
 *     ?ReportDripsBlocker@DXGGLOBAL@@QEAAXW4_SLEEPSTUDY_CONNECTION_ID@@PEAU_DEVICE_OBJECT@@PEAU_EPROCESS@@_KI@Z @ 0x1C0211828 (-ReportDripsBlocker@DXGGLOBAL@@QEAAXW4_SLEEPSTUDY_CONNECTION_ID@@PEAU_DEVICE_OBJECT@@PEAU_EPROCE.c)
 * Callees:
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?RtlStringCchCopyA@@YAJPEAD_KPEBD@Z @ 0x1C003BEB4 (-RtlStringCchCopyA@@YAJPEAD_KPEBD@Z.c)
 */

__int64 __fastcall DripsBlockerInfoList::AddDripsBlocker(
        unsigned int *a1,
        int a2,
        const STRING *a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  __int64 v6; // rsi
  __int64 i; // r15
  __int64 v11; // rcx
  unsigned int v12; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx

  v6 = 0LL;
  for ( i = a2; (unsigned int)v6 < *a1; v6 = (unsigned int)(v6 + 1) )
  {
    v11 = *((_QWORD *)a1 + 1) + 72 * v6;
    if ( a4 == *(_QWORD *)(v11 + 16) && !RtlCompareString((const STRING *)v11, a3, 0) )
      break;
  }
  v12 = *a1;
  if ( (_DWORD)v6 == *a1 )
  {
    if ( v12 >= 0x100 )
      return 3221225495LL;
    v6 = *a1;
    v14 = *((_QWORD *)a1 + 1) + 40LL;
    *a1 = v12 + 1;
    memset((void *)(v14 + 72 * v6), 0, 0x20uLL);
    v15 = *((_QWORD *)a1 + 1);
    *(_QWORD *)(v15 + 72 * v6 + 24) = 0LL;
    *(_QWORD *)(v15 + 72 * v6 + 32) = 0LL;
    RtlStringCchCopyA(*(char **)(*((_QWORD *)a1 + 1) + 72 * v6 + 8), 0x21uLL, a3->Buffer);
    *(_WORD *)(*((_QWORD *)a1 + 1) + 72 * v6) = a3->Length;
    *(_QWORD *)(*((_QWORD *)a1 + 1) + 72 * v6 + 16) = a4;
  }
  v16 = (unsigned int)v6 + i + 8LL * (unsigned int)v6;
  *(_QWORD *)(*((_QWORD *)a1 + 1) + 8 * v16 + 40) += a5;
  *(_DWORD *)(*((_QWORD *)a1 + 1) + 4 * (i + 18LL * (unsigned int)v6) + 24) += a6;
  return 0LL;
}
