/*
 * XREFs of NdisMWriteConfigBlock @ 0x1C00B1920
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NdisMWriteConfigBlock(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v6; // ebp
  __int64 (__fastcall *v8)(__int64, _QWORD, __int64, _QWORD); // rax
  __int64 v9; // rcx
  unsigned int v10; // edi

  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      26,
      125,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      (char)a1);
  }
  v8 = (__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD))a1[606];
  if ( v8 && (v9 = a1[608]) != 0 && (a2 = a1[576]) != 0 && (LODWORD(a2) = *(_DWORD *)(a2 + 8) & 5, (_BYTE)a2 == 5) )
    v10 = v8(v9, v6, a3, a4);
  else
    v10 = -1073741637;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      26,
      126,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      (char)a1);
  }
  return v10;
}
