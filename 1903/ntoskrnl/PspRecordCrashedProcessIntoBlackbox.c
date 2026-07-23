/*
 * XREFs of PspRecordCrashedProcessIntoBlackbox @ 0x1408C6E88
 * Callers:
 *     PsSetProcessFaultInformation @ 0x14071E780 (PsSetProcessFaultInformation.c)
 * Callees:
 *     ZwPowerInformation @ 0x1401C0CB0 (ZwPowerInformation.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall PspRecordCrashedProcessIntoBlackbox(__int64 a1)
{
  unsigned __int16 *v1; // rbx
  int v2; // edi
  _DWORD *PoolWithTag; // rax
  _DWORD *v4; // rsi
  _QWORD InputBuffer[3]; // [rsp+30h] [rbp-38h] BYREF
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]

  v1 = *(unsigned __int16 **)(a1 + 1128);
  InputBuffer[2] = 0LL;
  v2 = 0;
  v7 = 0;
  if ( v1 && *((_QWORD *)v1 + 1) && *v1 )
    v2 = *v1 + 2;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(v2 + 8), 0x62427350u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, (unsigned int)(v2 + 8));
    *v4 = 1;
    v4[1] = v2 + 8;
    if ( v2 )
      memmove(v4 + 2, *((const void **)v1 + 1), *v1);
    v6 = 13;
    InputBuffer[0] = v4;
    InputBuffer[1] = (unsigned int)(v2 + 8);
    ZwPowerInformation(UpdateBlackBoxRecorder, InputBuffer, 0x20u, 0LL, 0);
    ExFreePoolWithTag(v4, 0x62427350u);
  }
}
