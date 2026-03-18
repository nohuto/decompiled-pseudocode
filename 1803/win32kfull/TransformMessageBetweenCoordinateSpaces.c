/*
 * XREFs of TransformMessageBetweenCoordinateSpaces @ 0x1C0041E60
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0041530 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxInterSendMsgEx @ 0x1C0044BF0 (xxxInterSendMsgEx.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0042C10 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     DoesMsgNeedDPITransform @ 0x1C00ECE90 (DoesMsgNeedDPITransform.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall TransformMessageBetweenCoordinateSpaces(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int16 *a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v6; // edi
  __int64 *v8; // r13
  unsigned int v9; // ebx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  unsigned int v11; // esi
  _QWORD *ThreadWin32Thread; // rax
  __int64 v13; // rcx
  __int64 v14; // r13
  __int64 CurrentProcessWin32Process; // rax
  __int64 v16; // rsi
  int v17; // edi
  int v18; // edi
  int v19; // eax
  _DWORD *v20; // rbx
  int v21; // edi
  int v22; // eax
  __int64 result; // rax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rbx
  unsigned int v29; // eax
  __int64 v30; // rbx
  __int64 v31; // rsi
  unsigned int v32; // edi
  int v33; // [rsp+20h] [rbp-59h] BYREF
  int v34; // [rsp+24h] [rbp-55h]
  _WORD v35[2]; // [rsp+28h] [rbp-51h] BYREF
  unsigned __int16 v36; // [rsp+2Ch] [rbp-4Dh]
  unsigned int v37; // [rsp+30h] [rbp-49h]
  __int64 *v38; // [rsp+38h] [rbp-41h]
  int v39; // [rsp+40h] [rbp-39h] BYREF
  int v40; // [rsp+44h] [rbp-35h]
  int v41; // [rsp+48h] [rbp-31h]
  _DWORD v42[2]; // [rsp+50h] [rbp-29h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-21h]
  int v44; // [rsp+60h] [rbp-19h] BYREF
  int v45; // [rsp+64h] [rbp-15h]
  int v46; // [rsp+68h] [rbp-11h]
  int v47; // [rsp+6Ch] [rbp-Dh]
  int v48; // [rsp+70h] [rbp-9h] BYREF
  int v49; // [rsp+74h] [rbp-5h]
  int v50; // [rsp+78h] [rbp-1h]
  int v51; // [rsp+7Ch] [rbp+3h]

  v6 = 0;
  v38 = a3;
  v8 = a3;
  v41 = a2;
  v9 = a1;
  if ( a5 )
    CurrentThreadDpiAwarenessContext = *(_DWORD *)(*(_QWORD *)(a5 + 40) + 288LL);
  else
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1, a2);
  v37 = CurrentThreadDpiAwarenessContext;
  if ( a6 )
  {
    v11 = *(_DWORD *)(*(_QWORD *)(a6 + 40) + 288LL);
    goto LABEL_16;
  }
  v11 = 18;
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      v14 = *ThreadWin32Thread;
      if ( *ThreadWin32Thread )
      {
        if ( *(_QWORD *)(v14 + 360) )
          CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
        if ( !*(_DWORD *)(v14 + 340) )
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
          v8 = v38;
          if ( CurrentProcessWin32Process )
            v11 = *(_DWORD *)(CurrentProcessWin32Process + 280);
          goto LABEL_16;
        }
        v11 = *(_DWORD *)(v14 + 340);
      }
      v8 = v38;
    }
  }
LABEL_16:
  if ( (((unsigned __int16)(v37 >> 8) ^ (unsigned __int16)(v11 >> 8)) & 0x1FF) == 0 )
    return 0LL;
  v16 = *(_QWORD *)a4;
  if ( !(unsigned int)DoesMsgNeedDPITransform(v9, a2, *(_QWORD *)a4) )
    return 0LL;
  if ( !v41 || v9 - 132 <= 0x19B )
    goto LABEL_36;
  if ( v9 == 834 )
    goto LABEL_35;
  if ( v9 > 0x220 )
  {
    if ( v9 == 643 )
    {
      v24 = *v8;
      if ( (unsigned __int64)(*v8 - 7) <= 1 )
      {
        v25 = TransformPointBetweenCoordinateSpaces(v16 + 8, v16 + 8, a5, a6);
        v26 = v16 + 16;
      }
      else
      {
        if ( (unsigned __int64)(v24 - 11) > 1 )
        {
          if ( v24 == 16 )
          {
            v33 = (__int16)v16;
            v34 = a4[1];
            v6 = TransformPointBetweenCoordinateSpaces(v35, &v33, a5, a6);
            *a4 = v35[0];
            a4[1] = v36;
          }
          goto LABEL_62;
        }
        v25 = TransformPointBetweenCoordinateSpaces(v16 + 4, v16 + 4, a5, a6);
        v26 = v16 + 12;
      }
      v6 = TransformRectBetweenCoordinateSpaces(v26, v26, a5, a6) | v25;
LABEL_62:
      switch ( v9 )
      {
        case 0x20Au:
        case 0x20Eu:
        case 0x241u:
        case 0x242u:
        case 0x243u:
        case 0x245u:
        case 0x246u:
        case 0x247u:
        case 0x249u:
        case 0x24Au:
        case 0x24Eu:
        case 0x24Fu:
        case 0x251u:
        case 0x252u:
        case 0x2A0u:
        case 0x2F2u:
        case 0x2F3u:
        case 0x2F4u:
          goto LABEL_46;
        case 0x20Bu:
        case 0x20Cu:
        case 0x20Du:
        case 0x2A1u:
          goto LABEL_66;
        case 0x210u:
          if ( v9 != 528 || *(_WORD *)v8 != 582 )
            goto LABEL_46;
          result = v6;
          break;
        default:
          return v6;
      }
      return result;
    }
    if ( v9 != 833 )
      goto LABEL_36;
LABEL_35:
    v6 = 1;
    goto LABEL_36;
  }
  if ( v9 == 544 )
  {
    v48 = *(_DWORD *)(v16 + 24);
    v49 = *(_DWORD *)(v16 + 28);
    v50 = *(_DWORD *)(v16 + 32) + *(_DWORD *)(v16 + 24);
    v51 = *(_DWORD *)(v16 + 36) + *(_DWORD *)(v16 + 28);
    v6 = TransformRectBetweenCoordinateSpaces(&v44, &v48, a5, a6);
    *(_DWORD *)(v16 + 24) = v44;
    *(_DWORD *)(v16 + 28) = v45;
    *(_DWORD *)(v16 + 32) = v46 - v44;
    *(_DWORD *)(v16 + 36) = v47 - v45;
    goto LABEL_62;
  }
  if ( v9 >= 0x46 )
  {
    if ( v9 <= 0x47 )
    {
      v48 = *(_DWORD *)(v16 + 16);
      v49 = *(_DWORD *)(v16 + 20);
      v50 = *(_DWORD *)(v16 + 24) + *(_DWORD *)(v16 + 16);
      v51 = *(_DWORD *)(v16 + 28) + *(_DWORD *)(v16 + 20);
      v6 = TransformRectBetweenCoordinateSpaces(&v44, &v48, a5, a6);
      *(_DWORD *)(v16 + 16) = v44;
      *(_DWORD *)(v16 + 20) = v45;
      *(_DWORD *)(v16 + 24) = v46 - v44;
      *(_DWORD *)(v16 + 28) = v47 - v45;
    }
    else
    {
      if ( v9 == 83 )
        return TransformPointBetweenCoordinateSpaces(v16 + 32, v16 + 32, a5, a6);
      if ( v9 == 131 )
      {
        if ( !*v8 )
          return TransformRectBetweenCoordinateSpaces(v16, v16, a5, a6);
        v17 = TransformRectBetweenCoordinateSpaces(v16, v16, a5, a6);
        v18 = TransformRectBetweenCoordinateSpaces(v16 + 16, v16 + 16, a5, a6) | v17;
        v19 = TransformRectBetweenCoordinateSpaces(v16 + 32, v16 + 32, a5, a6);
        v20 = *(_DWORD **)(v16 + 48);
        v21 = v19 | v18;
        v48 = v20[4];
        v49 = v20[5];
        v50 = v20[6] + v20[4];
        v51 = v20[7] + v20[5];
        v22 = TransformRectBetweenCoordinateSpaces(&v44, &v48, a5, a6);
        v20[4] = v44;
        v20[5] = v45;
        v20[6] = v46 - v44;
        v20[7] = v47 - v45;
        return v22 | (unsigned int)v21;
      }
    }
  }
LABEL_36:
  if ( v9 == 132 )
    goto LABEL_46;
  if ( v9 > 0x33F )
    return v6;
  if ( v9 <= 0x209 )
  {
    if ( v9 >= 0x200 )
      goto LABEL_66;
    if ( v9 > 0xA9 )
    {
      if ( v9 < 0xAB )
        return v6;
      if ( v9 > 0xAD )
      {
        if ( v9 != 274 )
          return v6;
        if ( !a4[1] )
          return v6;
      }
      goto LABEL_46;
    }
    if ( v9 < 0xA0 )
    {
      if ( v9 != 3 )
      {
        if ( v9 == 123 )
          goto LABEL_46;
        return v6;
      }
LABEL_66:
      if ( a5 )
      {
        v27 = *(_QWORD *)(a5 + 40);
        v33 = *a4;
        v34 = (__int16)HIWORD(*(_DWORD *)a4);
        v39 = *(_DWORD *)(v27 + 104);
        v40 = *(_DWORD *)(v27 + 108);
        TransformPointBetweenCoordinateSpaces(v42, &v39, a6, a5);
        v33 += v42[0];
        v34 += v42[1];
        LODWORD(result) = TransformPointBetweenCoordinateSpaces(v35, &v33, a5, a6);
        *(_QWORD *)a4 = ((unsigned __int16)(v36 - v40) << 16) | (unsigned __int16)(v35[0] - v39);
        return (unsigned int)result;
      }
      return v6;
    }
LABEL_46:
    v33 = *a4;
    v34 = (__int16)HIWORD(*(_DWORD *)a4);
    v6 = TransformPointBetweenCoordinateSpaces(v35, &v33, a5, a6);
    *(_QWORD *)a4 = (v36 << 16) | v35[0];
    return v6;
  }
  if ( v9 <= 0x313 )
  {
    if ( v9 == 787 )
    {
      if ( *(_QWORD *)a4 == 0xFFFFFFFFLL )
        return v6;
      goto LABEL_46;
    }
    goto LABEL_62;
  }
  if ( v9 != 831 )
    return v6;
  if ( !a6 )
    return v6;
  v28 = *(_QWORD *)a4;
  if ( !*(_QWORD *)a4 )
    return v6;
  v29 = TransformRectBetweenCoordinateSpaces(v28 + 4, v28 + 4, a5, a6);
  v30 = v28 + 44;
  v31 = 6LL;
  v32 = v29;
  do
  {
    v32 |= TransformRectBetweenCoordinateSpaces(v30, v30, a5, a6);
    v30 += 16LL;
    --v31;
  }
  while ( v31 );
  return v32;
}
