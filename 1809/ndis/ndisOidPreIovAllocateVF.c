/*
 * XREFs of ndisOidPreIovAllocateVF @ 0x1C00F9540
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qqDD @ 0x1C003A8AC (WPP_SF_qqDD.c)
 *     WPP_SF_qqq @ 0x1C003A960 (WPP_SF_qqq.c)
 *     ndisIovAllocateVF @ 0x1C00F8AEC (ndisIovAllocateVF.c)
 */

unsigned __int8 __fastcall ndisOidPreIovAllocateVF(_QWORD *a1)
{
  _DWORD *v1; // rsi
  unsigned __int8 VF; // bl
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v8; // [rsp+20h] [rbp-18h]
  int v9; // [rsp+28h] [rbp-10h]

  v1 = (_DWORD *)a1[4];
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
    WPP_SF_qqq(0x1Du, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, *a1, a1[3], v1);
  if ( v1[1] != 12 )
    goto LABEL_14;
  VF = 0;
  *((_DWORD *)a1 + 10) = 0;
  if ( v1[12] >= 0x660u )
  {
    if ( v1[13] < 0x660u )
    {
      v4 = -1073676266;
      goto LABEL_8;
    }
    v5 = *a1;
    if ( !*a1 )
      goto LABEL_16;
    v6 = *(_QWORD *)(v5 + 4648);
    if ( v6 && *(_QWORD *)(v5 + 3592) && (*(_BYTE *)(v6 + 8) & 3) == 3 )
    {
      VF = ndisIovAllocateVF((__int64)a1);
      goto LABEL_16;
    }
LABEL_14:
    *((_DWORD *)a1 + 10) = -1073741637;
    goto LABEL_15;
  }
  v4 = -1073676268;
LABEL_8:
  v1[17] = 1632;
  *((_DWORD *)a1 + 10) = v4;
LABEL_15:
  VF = 1;
LABEL_16:
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
  {
    v9 = *((_DWORD *)a1 + 10);
    LODWORD(v8) = VF;
    WPP_SF_qqDD(0x1Eu, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, *a1, a1[3], v8, v9);
  }
  return VF;
}
