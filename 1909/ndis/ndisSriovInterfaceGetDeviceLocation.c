/*
 * XREFs of ndisSriovInterfaceGetDeviceLocation @ 0x1C011AC00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ?ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z @ 0x1C00B0B48 (-ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z.c)
 */

struct _NDIS_VF_BLOCK *__fastcall ndisSriovInterfaceGetDeviceLocation(
        struct _NDIS_MINIPORT_BLOCK *a1,
        __int16 a2,
        _WORD *a3,
        _BYTE *a4,
        struct _NDIS_VF_BLOCK *a5)
{
  unsigned __int16 v7; // si
  char v9; // bl
  struct _NDIS_VF_BLOCK *result; // rax
  __int64 v11; // rdx

  v7 = a2;
  v9 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      26,
      105,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      (char)a1);
  }
  result = ndisIovFindVFByVFId(a1, v7);
  v11 = (__int64)result;
  if ( result )
  {
    *a3 = HIWORD(result->VFParameters.RequestorId);
    *a4 = BYTE1(result->VFParameters.RequestorId);
    result = a5;
    LOBYTE(a5->AdapterLink.Flink) = *(_BYTE *)(v11 + 1724);
  }
  else
  {
    v9 = 13;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 4;
    return (struct _NDIS_VF_BLOCK *)WPP_RECORDER_SF_qL(
                                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                                      v11,
                                      26,
                                      106,
                                      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
                                      (char)a1,
                                      v9);
  }
  return result;
}
