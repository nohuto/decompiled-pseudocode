/*
 * XREFs of GetPixelSizeInBytes @ 0x1C0207130
 * Callers:
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00F0408 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPixelSizeInBytes(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  if ( (int)a1 < 21 )
    goto LABEL_9;
  if ( (int)a1 > 22 )
  {
    if ( (int)a1 <= 30 )
    {
LABEL_9:
      v2 = WdLogNewEntry5_WdAssertion(a1, a2);
      *(_QWORD *)(v2 + 24) = 6875LL;
      WdLogEvent5_WdAssertion(v2);
      return 0LL;
    }
    if ( (int)a1 > 33 && (_DWORD)a1 != 35 )
    {
      if ( (_DWORD)a1 == 36 || (_DWORD)a1 == 113 )
        return 8LL;
      if ( (_DWORD)a1 != 119 )
        goto LABEL_9;
    }
  }
  return 4LL;
}
