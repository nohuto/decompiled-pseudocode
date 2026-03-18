/*
 * XREFs of ?PostPacket@CKernelTransport@@UEAAJPEAUUCE_RDP_HEADER@@PEAX@Z @ 0x1800C0CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CKernelTransport::PostPacket(CKernelTransport *this, struct UCE_RDP_HEADER *a2, void *a3)
{
  __int64 v3; // rcx
  int v4; // ebx
  unsigned int v5; // ebx

  if ( *((_DWORD *)a2 + 1) < 0x28u )
  {
    v5 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x88980403, 0x73u, 0LL);
  }
  else
  {
    v4 = NtDCompositionSubmitDWMBatch(*((unsigned int *)a2 + 4), *((_QWORD *)a2 + 3), a3);
    if ( v4 < 0 )
    {
      v5 = v4 | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v5, 0x79u, 0LL);
    }
    else
    {
      return 0;
    }
  }
  return v5;
}
