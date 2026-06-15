/*
 * XREFs of ?SetAllInitialStreamVolumes@CAudioStream@@QEAAJIPEBM_J@Z @ 0x1800CC728
 * Callers:
 *     ?SetAllInitialVolumesWithRamp@CVADServer@@UEAAJIPEBM_J@Z @ 0x1800DACA0 (-SetAllInitialVolumesWithRamp@CVADServer@@UEAAJIPEBM_J@Z.c)
 * Callees:
 *     ?ValidateAudioLevel@@YA_NM@Z @ 0x180010F28 (-ValidateAudioLevel@@YA_NM@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::SetAllInitialStreamVolumes(CAudioStream *this, __int64 a2, float *a3, __int64 a4)
{
  __int64 v4; // r11
  CAudioStream *v5; // r10
  __int64 v6; // rdx
  int v9; // ecx
  __int64 v10; // r8
  __int64 v11; // r9
  _DWORD *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a4;
  v5 = this;
  if ( (_DWORD)a2 == *((_DWORD *)this + 21) )
  {
    if ( (_DWORD)a2 )
    {
      do
      {
        if ( !ValidateAudioLevel(*a3) )
        {
          v6 = 977LL;
          goto LABEL_3;
        }
        a3 = (float *)(v11 + 4);
      }
      while ( v9 + 1 < (unsigned int)a2 );
      v12 = (_DWORD *)*((_QWORD *)v5 + 13);
      v13 = v10 - (_QWORD)v12;
      v14 = (unsigned int)a2;
      do
      {
        *v12 = *(_DWORD *)((char *)v12 + v13);
        ++v12;
        --v14;
      }
      while ( v14 );
    }
    LOBYTE(a2) = 1;
    (*(void (__fastcall **)(CAudioStream *, __int64, __int64))(*(_QWORD *)v5 + 120LL))(v5, a2, v4);
    return 0LL;
  }
  else
  {
    v6 = 973LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      v6,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
