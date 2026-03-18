/*
 * XREFs of Simulator_CallbackWorker @ 0x1C0063450
 * Callers:
 *     <none>
 * Callees:
 *     FreeDataBuffs @ 0x1C0013E30 (FreeDataBuffs.c)
 *     AMLIResumeInterpreter @ 0x1C00631E0 (AMLIResumeInterpreter.c)
 *     Simulator_DuplicateObjData @ 0x1C00635F4 (Simulator_DuplicateObjData.c)
 *     Simulator_EvaluateNode @ 0x1C0063644 (Simulator_EvaluateNode.c)
 *     Simulator_GetChildNode @ 0x1C006375C (Simulator_GetChildNode.c)
 *     Simulator_GetSiblingNode @ 0x1C00637C0 (Simulator_GetSiblingNode.c)
 *     Simulator_NotifyNode @ 0x1C006390C (Simulator_NotifyNode.c)
 *     Simulator_PauseInterpreter @ 0x1C00639A0 (Simulator_PauseInterpreter.c)
 *     Simulator_RemoveNode @ 0x1C0063D58 (Simulator_RemoveNode.c)
 */

void __fastcall Simulator_CallbackWorker(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  __int64 v8; // rcx
  int SiblingNode; // eax
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // rax

  if ( Argument1 && *(_DWORD *)Argument1 == 2 )
  {
    v4 = *((_DWORD *)Argument1 + 1);
    if ( v4 > 12 )
    {
      v10 = v4 - 13;
      if ( !v10 )
      {
        FreeDataBuffs(*((_QWORD *)Argument1 + 3), *((_DWORD *)Argument1 + 4));
        goto LABEL_26;
      }
      v11 = v10 - 1;
      if ( !v11 )
      {
        v13 = gpnsNameSpaceRoot;
        *((_DWORD *)Argument1 + 18) = 0;
        *((_QWORD *)Argument1 + 3) = v13;
        return;
      }
      v12 = v11 - 1;
      if ( v12 )
      {
        if ( v12 != 1 )
          goto LABEL_21;
        SiblingNode = Simulator_GetSiblingNode(Argument1, Argument1, Argument2);
      }
      else
      {
        SiblingNode = Simulator_GetChildNode(Argument1, Argument1, Argument2);
      }
    }
    else if ( v4 == 12 )
    {
      SiblingNode = Simulator_EvaluateNode(Argument1, Argument1, Argument2);
    }
    else
    {
      v5 = v4 - 7;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( v7 )
          {
            v8 = (unsigned int)(v7 - 1);
            if ( (_DWORD)v8 )
            {
              if ( (_DWORD)v8 == 1 )
              {
                AMLIResumeInterpreter();
LABEL_26:
                *((_DWORD *)Argument1 + 18) = 0;
                return;
              }
LABEL_21:
              *((_DWORD *)Argument1 + 18) = -1073741811;
              return;
            }
            SiblingNode = Simulator_PauseInterpreter(v8, Argument1, Argument2);
          }
          else
          {
            SiblingNode = Simulator_NotifyNode(Argument1, Argument1, Argument2);
          }
        }
        else
        {
          SiblingNode = Simulator_DuplicateObjData(Argument1, Argument1, Argument2);
        }
      }
      else
      {
        SiblingNode = Simulator_RemoveNode(Argument1, Argument1, Argument2);
      }
    }
    *((_DWORD *)Argument1 + 18) = SiblingNode;
  }
}
