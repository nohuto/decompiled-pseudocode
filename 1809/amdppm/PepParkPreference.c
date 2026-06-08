/*
 * XREFs of PepParkPreference @ 0x1C00097A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00016A8 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C000CB40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000CEC0 (memset.c)
 */

__int64 __fastcall PepParkPreference(
        char a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 result; // rax
  unsigned int v11; // esi
  int v12; // r8d
  __int64 v13; // r13
  unsigned int v14; // r14d
  __int64 v15; // rdx
  char *v16; // rbx
  unsigned int v17; // eax
  int v18; // eax
  unsigned int v19; // ebx
  __int64 v20; // rcx
  unsigned int v21; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v22[24]; // [rsp+38h] [rbp-38h] BYREF
  _DWORD v23[2]; // [rsp+50h] [rbp-20h] BYREF
  _BYTE *v24; // [rsp+58h] [rbp-18h]
  __int64 v25; // [rsp+60h] [rbp-10h]
  char v26; // [rsp+68h] [rbp-8h]

  result = (unsigned int)dword_1C0011928;
  if ( dword_1C0011928 < (unsigned int)dword_1C00113E4 )
    return result;
  result = KeCountSetBitsAffinityEx(a4);
  v11 = result;
  if ( !(_DWORD)result )
    return result;
  result = a6 ? KeCountSetBitsAffinityEx(a6) : 0LL;
  if ( a3 <= (unsigned int)result || a3 >= v11 )
    return result;
  v12 = v11;
  if ( v11 < 4 )
    v12 = 4;
  memset(PepParkLists, 0, (unsigned int)(16 * v12));
  v13 = 0LL;
  v14 = 0;
  KeInitializeEnumerationContext(v22, a4);
  result = KeEnumerateNextProcessor(&v21, v22);
  if ( (_DWORD)result )
    return result;
  while ( v14 < v11 )
  {
    v15 = v21;
    v16 = &PepParkLists[16 * v14];
    v13 = *(_QWORD *)(DevExts + 8LL * v21);
    *(_QWORD *)v16 = *(_QWORD *)(v13 + 1088);
    v16[9] = 0;
    if ( a6 )
    {
      if ( (unsigned int)KeCheckProcessorAffinityEx(a6, v15) )
      {
        v16[8] = 2;
        v17 = a3 - 1;
        if ( !a3 )
          v17 = 0;
        a3 = v17;
        goto LABEL_22;
      }
      v15 = v21;
    }
    v16[8] = a5 && (unsigned int)KeCheckProcessorAffinityEx(a5, v15);
LABEL_22:
    ++v14;
    result = KeEnumerateNextProcessor(&v21, v22);
    if ( (_DWORD)result )
      break;
  }
  if ( v14 && v13 )
  {
    v26 = a1;
    v23[0] = a3;
    v25 = a2;
    v23[1] = v14;
    v24 = PepParkLists;
    v18 = ((__int64 (__fastcall *)(_QWORD, _DWORD *))qword_1C0011670)(*(_QWORD *)(v13 + 1088), v23);
    if ( v18 < 0 )
      return WPP_RECORDER_SF_D(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               3u,
               2u,
               0x11u,
               (__int64)&WPP_b2bd489c9f8f3f4d7c770ae62f3187bb_Traceguids,
               v18);
    v19 = 0;
    KeInitializeEnumerationContext(v22, a4);
    while ( 2 )
    {
      result = KeEnumerateNextProcessor(&v21, v22);
      if ( (_DWORD)result || v19 >= v11 )
        return result;
      if ( PepParkLists[16 * v19 + 9] == 1 )
      {
        v20 = a7;
LABEL_33:
        KeAddProcessorAffinityEx(v20, v21);
      }
      else if ( PepParkLists[16 * v19 + 9] == 2 )
      {
        v20 = a8;
        goto LABEL_33;
      }
      ++v19;
      continue;
    }
  }
  return result;
}
